#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bool isAscending = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = false;
            break;
        }
    }
    if (isAscending) {
        printf("The elements are in ascending order.\n");
    } else {
        printf("The elements are not in ascending order.\n");
    }
    return 0;
}