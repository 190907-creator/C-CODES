#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    while (1) {  
        
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator\n");
            break; 
        }

        // For choices 1–4, take two numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result = %f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result = %f\n", result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                printf("Result = %f\n", result);
                break;
            default:
                printf("Invalid choice! Please enter 1–5.\n");
        }
    }

    return 0;
}