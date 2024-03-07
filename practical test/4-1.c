#include <stdio.h>


int main() {
    int arr[5];
    int maxOfArray=arr[0];
    int sum=0;
    int diff=0;

    for(int i=0; i<5; i++) {
        printf("#%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("YOUR ARRAY:\n");
    for(int i=0; i<5; i++) {
        printf("%d\t", arr[i]);
    }

    for(int i=0; i<5; i++) {
        if(arr[i]>maxOfArray) {
            maxOfArray=arr[i];
        }
        else {
            i++;
        }
    }

    for(int i=0; i<5; i++) {
        if(arr[i]!=maxOfArray) {
            diff++;
            sum+=arr[i];
        }
        else {
            i++;
        }
    }

    printf("\nNUMBER OF INTEGERS DIFFERENT THAN %d:\t%d\n", maxOfArray, diff);
    printf("SUM OF INTEGERS DIFFERENT THAN %d:\t%d\n", maxOfArray, sum);
    printf("AVERAGE OF INTEGERS DIFFERENT THAN %d:\t%g", maxOfArray, (float)sum/diff);

}