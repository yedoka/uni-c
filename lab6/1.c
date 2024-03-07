#include <stdio.h>

int  displayFactors(int n);
void getInteger(int n);

int main() {
    int p;
    printf("Enter some integer: ");
    scanf("%d", &p);
    printf("Are factors of %d", displayFactors(p), p);
    printf("\n");
    getInteger(p);
}

int displayFactors(int n) {
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
}
}

void getInteger(int n) {
    if(n > 0)
        printf("%d is positive", n);
    else
        printf("%d is negative", n);
}
