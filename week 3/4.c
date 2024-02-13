#include <stdio.h>
// Function Declaration
void calculateBillDetails(float mealCost);

int main()
{
    float mealCost;

    // Input the meal cost from the user
    printf("Enter the meal cost: $");
    scanf("%f", &mealCost);

    // Check if the entered meal cost is non-negative
    if (mealCost >= 0)
    {
        // Call the function to calculate and display bill details
        calculateBillDetails(mealCost);
    }
    else
    {
        printf("Please enter a non-negative meal cost.\n");
    }

    return 0;
}

// Function to calculate tax and tip on a restaurant bill
void calculateBillDetails(float mealCost)
{
    // Constants for tax rate and tip rate
    const float TAX_RATE = 0.0475; // 4.75%
    const float TIP_RATE = 0.10;   // 10%

    // Calculate tax and tip amounts
    float taxAmount = mealCost * TAX_RATE;
    float totalWithTax = mealCost + taxAmount;
    float tipAmount = totalWithTax * TIP_RATE;
    float totalBill = totalWithTax + tipAmount;

    // Display the details
    printf("Meal Cost: $%.2f\n", mealCost);
    printf("Tax Amount: $%.2f\n", taxAmount);
    printf("Tip Amount: $%.2f\n", tipAmount);
    printf("Total Bill: $%.2f\n", totalBill);
}