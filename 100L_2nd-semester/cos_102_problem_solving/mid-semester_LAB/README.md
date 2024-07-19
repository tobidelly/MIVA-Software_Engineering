# Miva Open University COS 102 (Introduction to Problem Solving) Mid-Semester LAB Assignment 

## CGPA CALCULATOR 

### Team contributors: 

1. [Ahmad Major](https://github.com/Ahmad081255)

2. [Tobi Delly](https://github.com/tobidelly)

3. [Udemezue John](https://github.com/udemezue01)

4. [Abubakar Abubakar](https://github.com/Azkiama-07)


# GPA and CGPA Calculation

## Explanation

### GPA Calculation

The `calculateGPA` function computes the GPA for the current semester using the formula:

GPA = Total Grade Points / Total Credits

where Total Grade Points is the sum of (Grade Point × Credits) for each course.

### CGPA Calculation

The `calculateCGPA` function computes the CGPA by combining the total grade points and total credits from previous semesters with the current semester's results:

CGPA = (Previous Total Grade Points + Current Total Grade Points) / (Previous Total Credits + Current Credits)

### Main Logic

- The user can choose to calculate either the GPA or the CGPA.
- For GPA calculation, the program collects the course details and computes the GPA for the current semester.
- For CGPA calculation, the program first collects previous semester GPAs and credits, then collects the current semester's course details to compute the CGPA.

This ensures that the GPA is calculated solely for the current semester while the CGPA accumulates results from all semesters. The CGPA will always be a cumulative average and will not exceed the GPA of the current semester.

### Side note: 
To calculate the new CGPA using the current semester results and previous GPA or CGPA, you can follow these steps:

1. Convert the previous CGPA to total grade points:
Previous Total Grade Points = Previous CGPA × Total Credits Attempted (until the previous semester)

2. Calculate the grade points for the current semester:
Current Semester Grade Points = Σ (Grade Point × Credits) for the current semester

3. Add the previous total grade points and the current semester grade points:
New Total Grade Points = Previous Total Grade Points + Current Semester Grade Points

4. Calculate the new total credits attempted:
New Total Credits Attempted = Total Credits Attempted (until the previous semester) + Total Credits Attempted (in the current semester)

5. Calculate the new CGPA:
New CGPA = New Total Grade Points ÷ New Total Credits Attempted
