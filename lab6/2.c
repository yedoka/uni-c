#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArray(int *array, int size, int a, int b);
void displayArray(int *array, int size);
void reverseArray(int *array, int size);

int main() {
    srand(time(0));

    int n, min, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter a: ");
    scanf("%d", &min);
    printf("Enter b: ");
    scanf("%d", &max);
    generateArray(arr, n, min, max);
    displayArray(arr, n);
    reverseArray(arr, n);
    printf("\n");
    displayArray(arr, n);

}

void generateArray(int *array, int size, int a, int b) {
    for(int i = 0; i < size; i++) {
        array[i] = rand() % (b - a + 1) + a;
    }
}

void displayArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }
}

void reverseArray(int *array, int size) {
    for(int i = 0; i < size/2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

