#include <stdio.h>

int main() {
    char input;
    do {
        int num, original, lastDigit, newNum, remainder;
        
        // Ask the user to input a 6-digit number
        printf("Enter a 6-digit number: ");
        scanf("%d", &num);
        
        // Store the original number
        original = num;
        
        // Store the last digit
        lastDigit = num % 10;
        
        // Remove the last digit
        num /= 10;
        
        // Divide the new 5-digit number by 7
        remainder = num % 7;
        
        // Print the remainder and last digit
        printf("Remainder: %d\n", remainder);
        printf("Last Digit: %d\n", lastDigit);
        
        // Check if the remainder is equal to the removed digit
        if (remainder == lastDigit) {
            printf("true\n");
        } else {
            printf("false\n");
        }
        
        // Ask if the user wants to continue
        printf("Press 'x' to exit or any other key to continue: ");
        scanf(" %c", &input); // Note the space before %c to consume any newline characters
        
    } while (input != 'x');
    
    return 0;
}
