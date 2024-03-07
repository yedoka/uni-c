#include <stdio.h>

typedef struct {
    char name[50];
    char surname[50];
    int yearOfBirth;
    int yearOfStudy;
    int sumECTS;
    float avgGrade;
} Student;

float computeGlobalAvg(Student *students, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].avgGrade;
    }
    return sum / n;
}

void getStudentInfo(Student *student) {
    printf("Enter student's name: ");
    fgets(student->name, 50, stdin);
    printf("Enter student's surname: ");
    fgets(student->surname, 50, stdin);
    printf("Enter student's year of birth: ");
    scanf("%d", &student->yearOfBirth);
    printf("Enter student's year of study: ");
    scanf("%d", &student->yearOfStudy);
    printf("Enter student's sum of ECTS points: ");
    scanf("%d", &student->sumECTS);
    printf("Enter student's average grade: ");
    scanf("%f", &student->avgGrade);
    getchar(); // consume the newline character left in the input buffer
}

void displayStudentInfo(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Surname: %s\n", student->surname);
    printf("Year of birth: %d\n", student->yearOfBirth);
    printf("Year of study: %d\n", student->yearOfStudy);
    printf("Sum of ECTS points: %d\n", student->sumECTS);
    printf("Average grade: %.2f\n", student->avgGrade);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // consume the newline character left in the input buffer

    Student *students = (Student *) malloc(n * sizeof(Student));
    if (students == NULL) {         
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        getStudentInfo(&students[i]);
    }

    printf("\nStudent information:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentInfo(&students[i]);
    }

    float globalAvg = computeGlobalAvg(students, n);
    printf("\nGlobal average grade: %.2f\n", globalAvg);

    free(students);
    return 0;
}
