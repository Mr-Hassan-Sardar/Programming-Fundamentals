#include <stdio.h>

int reverseNumber(int number);

int main()
{
    int inputNumber;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &inputNumber);

    // Check if the number has three digits
    if (inputNumber >= 100 && inputNumber <= 999)
    {
        // Reverse the number using the function
        int reversedNumber = reverseNumber(inputNumber);

        // Display the result
        printf("Reversed number: %d\n", reversedNumber);
    }
    else
    {
        printf("Please enter a valid three-digit number i.e 100 to 999.\n");
    }

    return 0;
}

// Function to reverse a three-digit number
int reverseNumber(int number)
{
    int reverse = 0;

    // Reverse the digits using modulus and division
    reverse += (number % 10) * 100;
    number /= 10;
    reverse += (number % 10) * 10;
    number /= 10;
    reverse += number;

    return reverse;
}