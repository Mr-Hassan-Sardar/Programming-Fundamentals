#include <stdio.h>

int main()
{
    char alphabet;

    // Input an alphabet from the user
    printf("Enter alphabet: ");
    scanf(" %c", &alphabet);

    // Convert to uppercase for case-insensitivity
    switch (toupper(alphabet))
    {
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
          printf("%c is a vowel\n", alphabet);
          break;
        default:
        printf("%c is a consonant\n", alphabet);
    }

    return 0;
}
