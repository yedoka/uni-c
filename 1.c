#include <stdio.h>

int main() {
    int a, b, x;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);
    int res;
    for (int x = 0; x <= 10; x++)
    {
        res = a*x+b;
        printf("\n %4d. f(x)=%d", x, res);
    }
    
    return 0;
}