# Miva Open University COS 102 (Introduction to Problem Solving) Mid-Semester LAB Assignment 

## CGPA CALCULATOR 

### Team contributors: 

1. [Ahmad Major](https://github.com/Ahmad081255)

2. [Tobi Delly](https://github.com/tobidelly)

3. [Udemezue John](https://github.com/udemezue01)


# GPA and CGPA Calculation

## Explanation

### GPA Calculation

The `calculateGPA` function computes the GPA for the current semester using the formula:

\[ \text{GPA} = \frac{\text{Total Grade Points}}{\text{Total Credits}} \]

where Total Grade Points is the sum of (Grade Point × Credits) for each course.

### CGPA Calculation

The `calculateCGPA` function computes the CGPA by combining the total grade points and total credits from previous semesters with the current semester's results:

\[ \text{CGPA} = \frac{\text{Previous Total Grade Points} + \text{Current Total Grade Points}}{\text{Previous Total Credits} + \text{Current Credits}} \]

### Main Logic

- The user can choose to calculate either the GPA or the CGPA.
- For GPA calculation, the program collects the course details and computes the GPA for the current semester.
- For CGPA calculation, the program first collects previous semester GPAs and credits, then collects the current semester's course details to compute the CGPA.

This ensures that the GPA is calculated solely for the current semester while the CGPA accumulates results from all semesters. The CGPA will always be a cumulative average and will not exceed the GPA of the current semester.

