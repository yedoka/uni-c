#include <stdio.h>
/*
int main() {
    int n, sum = 0;
    printf("Enter 5 integers: \n");
    for(int i = 1; i <= 5; i++) {
        printf("# %d ", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum equals %d \n", sum);
    printf("Average equals %g \n", (float) sum/5, sum);
    return 0;
}
*/
//Version 2
int main() {
    int arr[5];
    int n, sum = 0;
    printf("Enter 5 integers: \n");
    for(int i = 1; i <= 5; i++) {
        printf("# %d ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum equals %d \n", sum);
    printf("Average equals to %g \n", (float) sum/5, sum);
    return 0;
}