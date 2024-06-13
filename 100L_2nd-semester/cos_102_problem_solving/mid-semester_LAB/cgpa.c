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

// Function to convert letter grade to grade points
float gradePoints(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

// Function to calculate GPA
float calculateGPA(int num_courses, int credits[], char grades[]) {
    int total_credits = 0;
    float total_points = 0.0;

    for (int i = 0; i < num_courses; i++) {
        total_credits += credits[i];
        total_points += credits[i] * gradePoints(grades[i]);
    }

    return total_credits > 0 ? total_points / total_credits : 0;
}

// Function to calculate CGPA
float calculateCGPA(float previous_total_grade_points, int previous_total_credits, float current_total_grade_points, int current_credits) {
    float new_total_grade_points = previous_total_grade_points + current_total_grade_points;
    int new_total_credits = previous_total_credits + current_credits;

    return new_total_grade_points / new_total_credits;
}

int main() {
    int choice;
    int num_courses;
    float previous_total_grade_points = 0;
    int previous_total_credits = 0;
    float current_gpa = 0;

    printf("Do you want to calculate your CGPA or GPA for the semester?\n");
    printf("Enter 1 for CGPA or 2 for GPA: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("How many courses did you offer this semester? ");
        scanf("%d", &num_courses);

        char course_codes[num_courses][100];
        int credits[num_courses];
        int marks[num_courses];
        char grades[num_courses];

        // Input course details from user
        for (int i = 0; i < num_courses; i++) {
            printf("Course %d code: ", i + 1);
            scanf(" %[^\n]", course_codes[i]);

            printf("Course %d unit credit: ", i + 1);
            scanf("%d", &credits[i]);

            do {
                printf("Course %d score: ", i + 1);
                scanf("%d", &marks[i]);
            } while (marks[i] < 0 || marks[i] > 100); // Loop until valid input is provided

            // Determine letter grade for the course
            grades[i] = determineGrade(marks[i]);
        }

        // Calculate GPA
        current_gpa = calculateGPA(num_courses, credits, grades);

        // Display results
        printf("\nNumber of courses offered: %d\n", num_courses);
        printf("Course Code\tUnit Credit\tGrade\n");
        for (int i = 0; i < num_courses; i++) {
            printf("%s\t\t%d\t\t%c\n", course_codes[i], credits[i], grades[i]);
        }
        printf("GPA: %.2f\n", current_gpa);

    } else if (choice == 1) {
        int more_semesters;

        // Loop to input previous semester GPAs
        do {
            float semester_gpa;
            int semester_credits;

            printf("Enter previous semester GPA: ");
            scanf("%f", &semester_gpa);

            printf("Enter total credits for that semester: ");
            scanf("%d", &semester_credits);

            // Calculate total grade points for the previous semester
            float previous_grade_points = semester_gpa * semester_credits;
            previous_total_grade_points += previous_grade_points;
            previous_total_credits += semester_credits;

            printf("Is there another previous semester GPA to add? (1 for yes, 0 for no): ");
            scanf("%d", &more_semesters);
        } while (more_semesters);

        printf("How many courses did you offer this semester? ");
        scanf("%d", &num_courses);

        char course_codes[num_courses][100];
        int credits[num_courses];
        int marks[num_courses];
        char grades[num_courses];

        // Input course details from user for current semester
        for (int i = 0; i < num_courses; i++) {
            printf("Course %d code: ", i + 1);
            scanf(" %[^\n]", course_codes[i]);

            printf("Course %d unit credit: ", i + 1);
            scanf("%d", &credits[i]);

            do {
                printf("Course %d score: ", i + 1);
                scanf("%d", &marks[i]);
            } while (marks[i] < 0 || marks[i] > 100); // Loop until valid input is provided

            // Determine letter grade for the course
            grades[i] = determineGrade(marks[i]);
        }

        // Calculate GPA for current semester
        current_gpa = calculateGPA(num_courses, credits, grades);
        float current_total_grade_points = current_gpa * num_courses;

        // Calculate overall CGPA
        float cgpa = calculateCGPA(previous_total_grade_points, previous_total_credits, current_total_grade_points, num_courses);

        // Display results
        printf("\nNumber of courses offered this semester: %d\n", num_courses);
        printf("Course Code\tUnit Credit\tGrade\n");
        for (int i = 0; i < num_courses; i++) {
            printf("%s\t\t%d\t\t%c\n", course_codes[i], credits[i], grades[i]);
        }
        printf("GPA for this semester: %.2f\n", current_gpa);
        printf("CGPA: %.2f\n", cgpa);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
