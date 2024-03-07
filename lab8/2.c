#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    char surname[50];
    int year_of_birth;
    int year_of_study;
    int sum_ects_points;
    float average_grades;
};

// Function to calculate global average of all students
float calculate_global_average(struct Student students[], int n) {
    float sum_grades = 0.0;
    int sum_ects = 0;
    for (int i = 0; i < n; i++) {
        sum_grades += students[i].average_grades * students[i].sum_ects_points;
        sum_ects += students[i].sum_ects_points;
    }
    return sum_grades / sum_ects;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // Clear the input buffer
    
    // Define an array of nth students
    struct Student students[n];
    
    // Get all information about students from the user and store them in the array
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove the newline character
        printf("Enter the surname of student %d: ", i+1);
        fgets(students[i].surname, 50, stdin);
        students[i].surname[strcspn(students[i].surname, "\n")] = '\0'; // Remove the newline character
        printf("Enter the year of birth of student %d ", i+1);
        scanf("%d", &students[i].year_of_birth);
        printf("Enter the year of study of student %d: ", i+1);
        scanf("%d", &students[i].year_of_study);
        printf("Enter the sum of ECTS points of student %d: ", i+1);
        scanf("%d", &students[i].sum_ects_points);
        printf("Enter the average of grades of student %d: ", i+1);
        scanf("%f", &students[i].average_grades);
        getchar(); // Clear the input buffer
    }
    
    // Display all information about students on the screen
    printf("\nInformation about students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Surname: %s\n", students[i].surname);
        printf("Year of birth: %d\n", students[i].year_of_birth);
        printf("Year of study: %d\n", students[i].year_of_study);
        printf("Sum of ECTS points: %d\n", students[i].sum_ects_points);
        printf("Average of grades: %.2f\n", students[i].average_grades);
        printf("\n");
    }
    
    // Find the best student and display their information
    int best_student_index = 0;
    float highest_average_grade = 0.0;
    for (int i = 0; i < n; i++) {
        if (students[i].average_grades > highest_average_grade) {
            highest_average_grade = students[i].average_grades;
            best_student_index = i;
        }
    }
    printf("The best student is:\n");
    printf("Name: %s\n", students[best_student_index].name);
    printf("Surname: %s\n", students[best_student_index].surname);
    printf("Year of birth: %d\n", students[best_student_index].year_of_birth);
    printf("Year of study: %d\n", students[best_student_index].year_of_study);
    printf("Sum of ECTS points: %d\n", students[best_student_index].sum_ects_points);
    printf("Average of grades: %.2f\n", students[best_student_index].average_grades);
    
    // Calculate and display global average of all students
    float global_average = calculate_global_average(students, n);
    printf("Global average of all students: %.2f\n", global_average);
    
    return 0;
}
