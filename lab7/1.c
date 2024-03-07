#include <stdio.h>

struct Student
{
    char name[100];
    char surname[100];
    int year_birth;
    int year_study;
    int ects;
    double average;
};
typedef struct Student Student;

int main() {
    int N;
    printf("Enter number of students: ");
    scanf("%d", &N);
    Student S[N];
    input_students(S, N);
    printf("List of students:\n");
    display_students(S, N);
    double res = global_average(S, N);
    printf("Global average is %g", res);
}

void input_students(Student *a, int n) {
    for(int i = 0; i<n; i++) {
        printf("Student #%d\n", i+1);
        printf("Name: ");
        scanf(" %99[^\n]", a[i].name);
        printf("Surname: ");
        scanf(" %99[^\n]", a[i].surname);
        printf("Year of birth: ");
        scanf("%d", &a[i].year_birth);
        printf("Year of study: ");
        scanf("%d", &a[i].year_study);
        printf("ECTS: ");
        scanf("%d", &a[i].ects);
        printf("Average: ");
        scanf("%lf", &a[i].average);
    }
}

void display_students(Student *a, int n) {
    for(int i = 0; i<n; i++)
        printf(" %d. %s %s %d %d %d %g\n", i+1, a[i].name, a[i].surname, a[i].year_birth, a[i].year_study, a[i].ects, a[i].average);
}

double global_average(Student *a, int n) {
    double avg;
    for(int i=0; i<n; i++) {
        avg += a[i].average;    
    }
    avg = avg/n;
    return avg;
}