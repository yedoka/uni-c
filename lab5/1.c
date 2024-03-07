#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int rows = 5, cols = 3;
    int arr[rows][cols];


    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            arr[i][j]=rand() % 100;
        }
    }


    printf("Array:\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int max_rows[rows];
    for (int i=0; i<rows; i++) {
        int max_row=arr[i][0];
        for (int j=1; j<cols; j++) {
            if (arr[i][j]>max_row) {
                max_row=arr[i][j];
            }
        }
        max_rows[i]=max_row;
    }
    printf("Max from each row:\n");
    for (int i=0; i<rows; i++) {
        printf("%d ", max_rows[i]);
    }
    printf("\n");


    int max_cols[cols];
    for (int j=0; j<cols; j++) {
        int max_col=arr[0][j];
        for (int i=1; i<rows; i++) {
            if (arr[i][j]>max_col) {
                max_col=arr[i][j];
            }
        }
        max_cols[j] = max_col;
    }
    printf("Max from each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("%d ", max_cols[j]);
    }
    printf("\n");

    return 0;
}
