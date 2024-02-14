#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int start, end;

    // Input two numbers from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Display prime numbers between the given range
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
