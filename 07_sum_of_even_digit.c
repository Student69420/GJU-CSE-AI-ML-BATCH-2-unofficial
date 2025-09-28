#include <stdio.h>

int main() {
    int number, digit, sum_of_even_digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    // Loop to extract digits and sum even ones
    while (number > 0) {
        digit = number % 10; // Get the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum_of_even_digits += digit; // Add to the sum if even
        }
        number /= 10; // Remove the last digit
    }

    printf("Sum of even digits: %d\n", sum_of_even_digits);

    return 0;
}