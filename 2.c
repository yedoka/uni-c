#include <stdio.h>

int main() {
    int n, m;
    printf("Enter values for n and m: ");
    scanf("%d %d", &n, &m);
    printf("Multiples of %d smaller than %d \n", n, m);
    for(int i = 1; i < m; i++) {
        if(n*i < m) {
            printf("%d ", n * i, i);
        }
        else {
            break;
        }
        
    }
    return 0;
}