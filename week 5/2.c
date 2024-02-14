#include <stdio.h>

int main()
{
    int number;

    // Input a number from the user
    printf("Enter a number to get its multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table from 1 to 10
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
