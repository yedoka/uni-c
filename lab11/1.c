#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int linesNumber(FILE *f);
int characterNumber(FILE *f);
int numberOfLetters(FILE *f);
int numberOfSpaces(FILE *f);
int userLetter(FILE *f, char letter);

int main()
{
    char letter;
    char filename[80]="sentences.txt";
    FILE *file = fopen(filename,"r+");
    if (file == NULL)
    {
        printf("I can not open the file \"%s\".\n",filename);
        exit(1);
    }

    printf("Number of all characters %d\n",characterNumber(file));
    printf("Number of all lines %d\n", linesNumber(file));
    printf("Number of letters %d\n", numberOfLetters(file));
    printf("Number of spaces %d\n", numberOfSpaces(file));
    printf("Which letter do you want to find?\n");
    scanf(" %c", &letter);
    printf("Number of %c is %d", letter, userLetter(file, letter));


    fclose(file);
    return 0;
}


int characterNumber(FILE *f)
{
    rewind(f);
    int result=0;
    char ch;
    while((ch=fgetc(f))!=EOF)
    {
            result++;
    }
    return result;
}

int linesNumber(FILE *f) {
    rewind(f);
    int result=1;
    char ch;
    while((ch=fgetc(f))!=EOF) 
    {
        if(ch=='\n')
            result++;
    }
    return result;
}

int numberOfLetters(FILE *f) {
    rewind(f);
    int result=0;
    char ch;
    while((ch=fgetc(f))!=EOF) 
    {
        if(isupper(ch) || islower(ch))
            result++;
    }
    return result;
}

int numberOfSpaces(FILE *f) {
    rewind(f);
    int result=0;
    char ch;
    while((ch=fgetc(f))!=EOF)
    {
        if(isspace(ch))
            result++;
    }
    return result;
}

int userLetter(FILE *f, char letter) {
    rewind(f);
    int result=0;
    char ch;
    while((ch=fgetc(f))!=EOF)
    {
        if(ch == letter)
            result++;
    }
    return result;
}