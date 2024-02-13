#include <stdio.h>

// Function to calculate the third angle of a triangle
float calculateThirdAngle(float angle1, float angle2) {
    // The sum of angles in a triangle is always 180 degrees
    float thirdAngle = 180 - angle1 - angle2;
    return thirdAngle;
}

int main() {
    float angle1, angle2;

    // Input the first angle
    printf("Enter the first angle: ");
    scanf("%f", &angle1);

    // Input the second angle
    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    // Calculate the third angle using the function
    float thirdAngle = calculateThirdAngle(angle1, angle2);

    // Display the result
    printf("The third angle is: %.2f degrees\n", thirdAngle);

    return 0;
}
