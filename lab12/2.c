#include <stdio.h>

typedef struct {
    char name[80];
    char surname[80];
    int age;
    char nationality[40];
    int no_of_points;
} Player;

int youngest(Player *a, int n) {
    int youngest=a[0].age;
    for(int i=0; i<n; i++) {
        if(a[i].age<youngest) {
            youngest=a[i].age;
        }
    }
    return youngest;
}

int main() {
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    Player A[n];
    FILE *file=fopen("players23.dat", "rb");
    int m=fread(A, sizeof(Player), n,   file);
    int counter=0;
    for(int i=0; i<m; i++) {
        counter++;
        printf("%d.\t%s %s %d %s %d\n", counter, A[i].name, A[i].surname, A[i].age, A[i].nationality, A[i].no_of_points);
    }
    printf("Youngest tennis player is %d years old", youngest(A, counter));
    fclose(file);
}