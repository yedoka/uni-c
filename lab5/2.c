#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[4][4];
    srand(time(NULL));
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 100;
        }
    }
    
    printf("The array in matrix form:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    int sum_diagonal = 0;
    for (int i = 0; i < 4; i++) {
        sum_diagonal += arr[i][i];
    }
    printf("The sum of the elements on the diagonal of the matrix: %d\n", sum_diagonal);
    
    int sum_below_diagonal = 0; 
    for (int i = 1 ; i < 4; i++) {
        for(int j = 0; j < i; j++) {
            sum_below_diagonal += arr[i][j];
        } 
    }

    printf("The sum of the elements below diagonal of the matrix: %d\n", sum_below_diagonal);
    
    return 0;
}
