#include <stdio.h>

int main() {
    int n = 5;
    int arr[n];
    printf("Please enter %d integers: \n", n);
    for(int *walker=arr, *stopper=arr+n; walker < stopper; walker++) {
        printf("#%d: ", (int)(walker - arr + 1));
        scanf("%d", walker);
    }
    int max = *arr;
    for(int *walker=arr+1, *stopper=arr+n; walker < stopper; walker++) {
        if(max < *walker) {
            max = *walker;
        }
    }
    double sum=0;
    int counter=0;
    for(int *walker=arr, *stopper=arr+n; walker < stopper; ++walker) {
        if(*walker != max) {
            sum += *walker;
            ++counter;
        }
    }
    printf("NUMBER OF ELEMENTS DIFFERENT THAN %d is %d\n", max, counter);
    printf("SUM OF ELEMENTS DIFFERENT THAN %d is %d\n", max, sum);
    printf("AVERAGE OF ELEMENTS DIFFERENT THAN %d is %d\n", max, sum/counter);
}