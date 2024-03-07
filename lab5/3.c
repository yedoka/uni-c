#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int n, m, max_sum_row = -1, min_sum_col = -1, max_sum = -1, min_sum = -1;;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    printf("Array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_sum_row = i;
        }
    }
    printf("The row with the largest sum is %d: ", max_sum_row+1);
    for (int j = 0; j < m; j++) {
        printf("%d ", arr[max_sum_row][j]);
    }
    printf("\nsum = %d", max_sum);

}