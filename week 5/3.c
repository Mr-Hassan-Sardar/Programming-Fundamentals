#include <stdio.h>

int main()
{
    int number;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Display factors of the entered integer
    printf("Factors of %d: ", number);
    for (int i = 2; i <= number; ++i)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
