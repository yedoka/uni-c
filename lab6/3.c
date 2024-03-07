#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);
bool getInteger(int n);

int main() {
    int num;
    printf("Enter some integer: ");
    scanf("%d", &num);
    printf("Is %d a positive number(1/0?):\t%d\n", num, getInteger(num));
    printf("Is %d a prime number(1/0?):\t%d", num, isPrime(num));
}

bool isPrime(int n) {
    int c = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            c++;
    }

    if(c == 2)
        return true;
    else
        return false;
}

bool getInteger(int n) {
    if(n > 0)
        return true;
    else
        return false;
}