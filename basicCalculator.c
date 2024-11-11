#include <stdio.h>




void addition() {
    double num1, num2;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}


void subtraction() {
    double num1, num2;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}


void multiplication() {
    double num1, num2;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}


void division() {
    double num1, num2;
    printf("Enter two numbers to divide: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice;
    char again;

    do {
        
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        
        if (choice == 1) {
            addition();
        } else if (choice == 2) {
            subtraction();
        } else if (choice == 3) {
            multiplication();
        } else if (choice == 4) {
            division();
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &again); 

    } while (again == 'y');

    printf("Exiting the calculator. Goodbye!\n");

    return 0;
}




    