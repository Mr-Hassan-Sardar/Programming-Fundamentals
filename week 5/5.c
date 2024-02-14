#include <stdio.h>

// Function to calculate Combination (nCr)
unsigned long long calculateCombination(int n, int r)
{
    // Base cases
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        // Recursive formula: C(n, r) = C(n-1, r-1) + C(n-1, r)
        return calculateCombination(n - 1, r - 1) + calculateCombination(n - 1, r);
    }
}

int main()
{
    int n, r;

    // Input values of n and r from the user
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    // Check if r is within the valid range [0, n]
    if (r >= 0 && r <= n)
    {
        // Call the function to calculate Combination and display the result
        unsigned long long result = calculateCombination(n, r);
        printf("C(%d, %d) is %llu\n", n, r, result);
    }
    else
    {
        printf("Invalid input. Please ensure that 0 <= r <= n.\n");
    }

    return 0;
}
