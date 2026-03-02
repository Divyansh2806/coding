#include <stdio.h>

int main() {
    float num1, num2;
    char operator, choice;

    do {
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(operator) {
            case '+':
                printf("Result = %.2f\n", num1 + num2);
                break;
            case '-':
                printf("Result = %.2f\n", num1 - num2);
                break;
            case '*':
                printf("Result = %.2f\n", num1 * num2);
                break;
            case '/':
                if(num2 != 0)
                    printf("Result = %.2f\n", num1 / num2);
                else
                    printf("Division by zero error!\n");
                break;
            default:
                printf("Invalid operator!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}