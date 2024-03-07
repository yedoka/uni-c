#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int numberOfChar(FILE *f) {
    rewind(f);
    int result = 0;
    char ch;
    while((ch=fgetc(f)!=EOF)) {
        result++;
    }
    return result;
}

int numberOfLines(FILE *f) {
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
        if (islower(ch) || isupper(ch))
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
        if (isspace(ch))
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

int numberofa(FILE *f) {
    rewind(f);
    int result=0;
    char ch;
    while((ch=fgetc(f))!=EOF){
        if(ch == 'a')
            result++;
    }
    return result;
}

int main() {
    char letter;
    char filename[80] = "sentences.txt";
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Can not open the file");
        exit(1);
    }

    printf("Number of all characters is %d\n", numberOfChar(file));
    printf("Number of all lines is %d\n", numberOfLines(file));
    printf("Number of all letters is %d\n", numberOfLetters(file));
    printf("Number of all spaces is %d\n", numberOfSpaces(file));
    printf("Which letter you need? ");
    scanf(" %c", &letter);
    printf("Number of %c's is %d\n", letter, userLetter(file, letter));
    printf("Number of all a's is %d", numberofa(file));
}