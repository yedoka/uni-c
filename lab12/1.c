#include <stdio.h>

typedef struct {
    char name[101];
    int numOfStudents;
} Course;

int sumOfStudents(Course *a, int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=a[i].numOfStudents;
    }
    return sum;
}

int main() {
    Course any;
    
    printf("Course name: ");
    scanf("%100[^\n]", any.name);
    printf("Number of students: ");
    scanf("%d", &any.numOfStudents);

    FILE *fp=fopen("courses.dat", "ab+");
    fwrite(&any, sizeof(Course), 1, fp);
    
    rewind(fp);

    int counter=0;
    while(fread(&any, sizeof(Course), 1, fp)==1) {
        counter++;
        printf("%d. %s %d\n", counter, any.name, any.numOfStudents);
    }
    rewind(fp);
    Course A[counter];
    fread(A, sizeof(Course), counter, fp);
    printf("Sum of all participants is %d", sumOfStudents(A, counter));
    fclose(fp);

    
}