#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter some sentence: ");
    fgets(str,sizeof(str),stdin);
    char filename[40]="myfile.txt";
    FILE *f=fopen(filename,"a");
    fputs(str,f);
    fclose(f);
    f=fopen(filename,"r");///check if myfile.txt exists
    puts("The file contents:");
    char buffer[255];
    while(fgets(buffer,sizeof(buffer),f)!=NULL)
        fputs(buffer,stdout);
    fclose(f);
    return 0;
}