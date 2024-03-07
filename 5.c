#include <stdio.h>
int main() {

  int n, m;
  printf("Enter n and m: ");
  scanf("%d %d", &n, &m);
  for(int i = 1; i <= m-n; i++) {
    printf("%d \n", n*i);
    n++;
    for(int j = 1; j <= m-n; j++) {
        printf("%d ", n*j);
        n++;
    }
  }
  return 0;
}
//Not finished