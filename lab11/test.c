#include <stdio.h>
#include <stdlib.h>

int main() {
    // Get input from the user
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Open the file in append mode
    FILE *file = fopen("repetition.txt", "a");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Append the sentence to the file
    fprintf(file, "%s", sentence);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("repetition.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Count the number of symbols in the file
    int symbolCount = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        symbolCount++;
    }

    // Close the file
    fclose(file);

    // Display the number of symbols
    printf("Number of symbols: %d\n", symbolCount);

    return 0;
}
