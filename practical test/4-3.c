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
    bool isUnique = true;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]==arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (!isUnique) {
            break;
        }
    }
    if (isUnique) {
        printf("All values in the array are unique.\n");
    } else {
        printf("Not all values in the array are unique.\n");
    }
    return 0;
}