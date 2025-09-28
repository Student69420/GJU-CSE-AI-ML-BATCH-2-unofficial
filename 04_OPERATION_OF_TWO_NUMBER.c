#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("%f / %f = %f\n", num1, num2, result);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}