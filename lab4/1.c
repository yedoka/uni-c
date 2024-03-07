#include <stdio.h>

int main() {
    int arr[5];
    int greatest, num = 0, sum = 0;
    printf("Please enter 5 integers: \n");
    for(int i = 1; i <= 5; i++) {
        printf("#%d: ", i);
        scanf("%d", arr+i);
    }
    greatest = arr[0];
    for(int i = 1; i <= 5; i++) {
        if(arr[i] > greatest) {
            greatest=arr[i];
        }
        else {
            i++;
        }
    }
    for(int i = 1; i <= 5; i++) {
        if(arr[i] != greatest) {
            num++;
            sum += arr[i];
        }
        else {
            i++;
        }
    }
    printf("NUMBER OF ELEMENTS DIFFERENT THAN %d = %d\n", greatest, num);
    printf("SUM OF ELEMENTS DIFFERENT THAN %d = %d\n", greatest, sum);
    printf("AVERAGE OF ELEMENTS DIFFERENT THAN %d = %g", greatest, (float)sum/num);
}