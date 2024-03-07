#include <stdio.h>

int func1(int *arr, int n) {
    int counter=0;
    for(int i=0; i<n; i++) {
        if((arr[i]>0) && (arr[i]<arr[n-1])) {
            counter++;
        }
    }
    return counter;
}

double func2(int *arr, int n) {
    double sum=0, counter=0;
    double res;
    for(int i=0; i<n; i++) {
        if((arr[i]>0) && (arr[i]<arr[n-1])) {
            counter++;
            sum+=arr[i];
        }
    }
    res = sum/counter;
    return res;
}

int main() {
    int n;
    printf("ENTER LENGTH OF ARRAY: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        printf("#%d.", i+1);
        scanf("%d", &arr[i]);
    }
    printf("YOUR ARRAY:\n");
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nELEMENTS THAT POSITIVE AND LESS THAN %d: %d", arr[n-1], func1(arr, n));
    printf("\nAVERAGE OF THESE ELEMENTS: %g", func2(arr, n));
}