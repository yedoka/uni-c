#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));
    int arr[4][4];

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
            arr[i][j] = rand() % 10;
    }

    printf("Array:\n");
    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    int sum_diagonal = 0;
    for (int i = 0; i < 4; i++) {
        sum_diagonal += arr[i][i];
    }
    printf("Sum of diagonal: %d\n", sum_diagonal);




    int sum_below = 0;
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < i; j++)
            sum_below += arr[i][j];
    }
    printf("Sum of below diagonal: %d\n", sum_below);




    int sum_above = 0;
    for (int j = 1; j < 4; j++) {
        for (int i = 0; i < j; i++)
            sum_above += arr[i][j];
    }
    printf("Sum of above diagonal: %d", sum_above);
}