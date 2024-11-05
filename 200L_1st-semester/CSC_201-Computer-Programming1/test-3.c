#include <stdio.h>

int main() {
    char name[50];  // Array to store the student's name
    int choice;     // Variable to store the user's menu choice

    // Display the initial welcome message
    printf("Welcome to Miva Open University Student Record\n");

    // Prompt the user to enter their name
    printf("Please enter your name: ");
    scanf("%49s", name);  // Read the name, limiting input to avoid overflow

    // Greet the user with their name
    printf("Welcome %s, to Student Record, portal for all student's database.\n", name);

    // Display menu options
    printf("\nWhat would you like to do today?\n");
    printf("Press 1 to Calculate CGPA or GPA\n");
    printf("Press 2 for Records\n");
    printf("Please enter your choice (1 or 2): ");
    scanf("%d", &choice);  // Read the user's menu choice

    // Handle the user's choice
    switch (choice) {
        case 1:
            printf("You selected to Calculate CGPA or GPA.\n");
            // Call the function to calculate CGPA or GPA (to be implemented later)
            break;
        case 2:
            printf("You selected Records.\n");
            // Call the function to view Records (to be implemented later)
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
