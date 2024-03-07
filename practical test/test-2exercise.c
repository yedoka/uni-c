#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void display(int n, int m, int arr[n][m]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][4], sum=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            arr[i][j]=-5+rand()%16; 
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++) {
        sum=0;
        for(int j=0; j<4; j++) {
            sum+=arr[i][j];
        }
        printf("SUM OF %d ROW IS %d\n", i+1, sum);
    }
    

    display(3, 4, arr);
}