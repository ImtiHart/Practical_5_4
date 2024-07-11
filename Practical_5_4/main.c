#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Create a C program that checks if the entered password meets certain criteria:
minimum 8 characters, at least one uppercase letter, and at least one number.
STEPS:
• Include the necessary header files (string.h).
• Declare a character array for the password.
• Prompt the user to enter the password.
• Use strstr() and a loop to check each character and validate against the criteria.
• Print whether the password is valid or not.*/


int main()
{
    char digit[] = "1234567890";
    char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char password[50];
    int upp = 0;
    int num = 0;
    printf("Type in password: ");
    scanf("%s", password);
    for (int x = 0; x < strlen(up); x++) {
        char substr[2] = {up[x], '\0'};
        if (strstr(password, substr) != NULL) {
            upp = 1;
            break;
        }
    }

    for (int x = 0; x < strlen(digit); x++) {
        char substr[2] = {digit[x], '\0'};
        if (strstr(password, substr) != NULL) {
            num = 1;
            break;
        }
    }

    if (strlen(password) >= 8 && upp && num) {
        printf("The password is valid.\n");
    } else {
        printf("The password is invalid.\n");
    }

    return 0;
}
