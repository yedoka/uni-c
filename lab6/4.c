#include <stdio.h>
#include <stdbool.h>

bool isTriangular(int n);
bool getInteger(int n);

int main() {
    int num;
    printf("Enter some integer: ");
    scanf("%d", &num);
    printf("Is %d a triangular(1/0?): \t%d", num, isTriangular(num));
}

bool isTriangular(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n == i*(i+1)/2)
            count++;
        else
            i++;
    }
    if(count >= 1)
        return true;
    else
        return false;
}