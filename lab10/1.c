#include <stdio.h>
#include <stdlib.h>

void append(char *filename, int n, int numbers[]) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("ERROR");
        exit(1);
    }

    for(int i=0; i<n; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
}

void display(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("ERROR");
        exit(1);
    }

    int number;
    while(fscanf(file, "%d", &number) == 1) {
        printf("%d\n", number);
    }

    fclose(file);
}

void odd (char *inputFilename, char *outputFilename) {
    FILE *inputfile = fopen(inputFilename, "r");
    if (inputfile == NULL) {
        printf("ERROR");
        exit(1);
    }

    FILE *outputfile = fopen(outputFilename, "w");
    if (outputfile == NULL) {
        printf("ERROR");
        exit(1);
    }

    int number;
    while(fscanf(inputfile, "%d", &number) == 1) {
        if(number % 2 == 1) {
            fprintf(outputfile, "%d\n", number);
        }
    }

    fclose(inputfile);
    fclose(outputfile);
}

int main() {
    char *filename = "numbers.txt";
    char *oddfilename = "odd_numbers.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("ERROR");
        exit(1);

    }
    fclose(file);

    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d integers:\t", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }

    append(filename, n, numbers);
    display(filename);
    odd(filename, oddfilename);
    printf("Odd numbers in a new file:\n");
    display(oddfilename);
}