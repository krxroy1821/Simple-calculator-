#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1: result = a + b; break;
        case 2: result = a - b; break;
        case 3: result = a * b; break;
        case 4: result = b != 0 ? a / b : 0; break;
        default: printf("Invalid choice\n"); return 0;
    }

    printf("Result = %.2f\n", result);
    return 0;
}