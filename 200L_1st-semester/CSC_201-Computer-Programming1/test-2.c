#include <stdio.h>

int main() {
    char name[50];  // Array to store the student's name

    // Display the initial welcome message
    printf("Welcome to Miva Open University Student Record\n");

    // Prompt the user to enter their name
    printf("Please enter your name: ");
    scanf("%49s", name);  // Read the name, limiting input to avoid overflow

    // Greet the user with their name
    printf("Welcome %s, to Student Record, portal for all student's database.\n", name);

    return 0;
}
