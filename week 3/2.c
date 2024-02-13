#include <stdio.h>
// Function declaration
long convertToSeconds(int days, int hours, int minutes);

int main()
{
    int days, hours, minutes;

    // Input days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Input hours from the user
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    // Input minutes from the user
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Convert days, hours, and minutes to seconds using the function
    long seconds = convertToSeconds(days, hours, minutes);

    // Display the result
    printf("Total seconds: %ld\n", seconds);

    return 0;
}

// Function to convert days, hours, and minutes to seconds
long convertToSeconds(int days, int hours, int minutes)
{
    // 1 day = 24 hours, 1 hour = 60 minutes
    long totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60);
    return totalSeconds;
}