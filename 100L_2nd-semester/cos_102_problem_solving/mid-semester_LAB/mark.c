#include <stdio.h>

// Function to determine letter grade based on marks
char determineGrade(int marks) {
    if (marks >= 80 && marks <= 100) {
        return 'A';
    } else if (marks >= 70 && marks <= 79) {
        return 'B';
    } else if (marks >= 60 && marks <= 69) {
        return 'C';
    } else if (marks >= 50 && marks <= 59) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    char course_code[100]; // Assuming the course code won't exceed 100 characters
    int marks;

    // Input course code and total marks from user
    printf("Course: ");
    scanf(" %[^\n]", course_code); // Read entire line including spaces

    // Validate marks input
    do {
        printf("%s score: ", course_code);
        scanf("%d", &marks);
    } while (marks < 0 || marks > 100); // Loop until valid input is provided

    // Determine and display the corresponding letter grade
    char grade = determineGrade(marks);
    printf("Course: %s, Grade: %c\n", course_code, grade);

    return 0;
}

