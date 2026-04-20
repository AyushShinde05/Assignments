#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("*Enter your choice*: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter num 1: ");
        scanf("%f", &a);
        printf("Enter num 2: ");
        scanf("%f", &b);
    }

    switch(choice) {
        case 1: 
            result = a + b;
            printf("Addition = %.2f\n", result);
            break;
        case 2: 
            result = a - b;
            printf("Subtraction = %.2f\n", result);
            break;
        case 3: 
            result = a * b;
            printf("Multiplication = %.2f\n", result);
            break;
        case 4: 
            if (b == 0) {
                printf("Error: Denominator can't be 0\n");
            } else {
                result = a / b;
                printf("Division = %.2f\n", result);
            }
            break;
        case 5: 
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}