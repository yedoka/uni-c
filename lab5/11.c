#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int rows = 5, cols = 3;
    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    printf("Array: \n");
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int max_rows[rows];
    for (int i = 0; i < rows; i++) {
        max_rows[i] = arr[i][0];
        for (int j = 1; j < cols; j++) {
            if(max_rows[i] < arr[i][j]) {
                max_rows[i] = arr[i][j];
            }
        }
    }
    printf("Max values from each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("%d ", max_rows[i]);
    }
    printf("\n");



    int max_cols[cols];
    for (int j = 0; j < cols; j++) {
        max_cols[j] = arr[0][j];
        for (int i = 1; i < rows; i++) {
            if(max_cols[j] < arr[i][j]) {
                max_cols[j] = arr[i][j];
            }
        }
    }
    printf("Max values from each column:\n");
    for(int i = 0; i < cols; i++) {
        printf("%d ", max_cols[i]);
    }
    printf("\n");

    return 0;
}