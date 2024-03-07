#include <stdio.h>

int main() {
    int n, m, sum = 0;
    printf("How many integers? ");
    scanf("%d", &m);
    printf("Enter %d integers: \n", m);
    for(int i = 1; i <= m; i++) {
        printf("# %d ", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum equals %d \n", sum);
    printf("Average equals %g \n", (float) sum/m, sum);
    return 0;
}