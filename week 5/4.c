#include <stdio.h>

// Function to calculate factorial using a for loop
unsigned long long factorialForLoop(int n)
{
    unsigned long long result = 1;

    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }

    return result;
}

// Function to calculate factorial using recursion
unsigned long long factorialRecursion(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n! = n * (n-1)!
        return n * factorialRecursion(n - 1);
    }
}

int main()
{
    int n;
    while (1)
    {
        // Input n from the user
        printf("Enter n: ");
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
        else
        {
            printf("Please enter valid number i.e. greater then 0\n");
        }
    }
    // Calculate factorial using a for loop
    unsigned long long resultForLoop = factorialForLoop(n);
    printf("Factorial using For Loop: %llu\n", resultForLoop);

    // Calculate factorial using recursion
    unsigned long long resultRecursion = factorialRecursion(n);
    printf("Factorial using Recursion: %llu\n", resultRecursion);

    return 0;
}
