#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random password
void generatePassword(char *password, int minLength, int maxLength) {
    // Define character sets (excluding space)
    const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    const char numbers[] = "0123456789";
    const char symbols[] = "!@#$%^&*()-_=+[]{}|;:'\",.<>/?";

    // Seed for randomization
    srand(time(NULL));

    // Randomly determine the length of the password within the specified range
    int length = rand() % (maxLength - minLength + 1) + minLength;

    // Loop to fill the password with random characters
    for (int i = 0; i < length; ++i) {
        int setIndex = rand() % 4; // Choose a character set randomly

        // Choose a random character from the selected set
        char randomChar;
        switch (setIndex) {
            case 0:
                randomChar = uppercase[rand() % (sizeof(uppercase) - 1)];
                break;
            case 1:
                randomChar = lowercase[rand() % (sizeof(lowercase) - 1)];
                break;
            case 2:
                randomChar = numbers[rand() % (sizeof(numbers) - 1)];
                break;
            case 3:
                randomChar = symbols[rand() % (sizeof(symbols) - 1)];
                break;
        }

        password[i] = randomChar;
    }

    // Null-terminate the password string
    password[length] = '\0';
}

int main() {
    // Specify the range for the length of the password
    int minLength = 7;  // Minimum length
    int maxLength = 30; // Maximum length

    // Allocate memory for the password
    char *password = (char *)malloc((maxLength + 1) * sizeof(char));

    // Generate the random password
    generatePassword(password, minLength, maxLength);

    // Print the generated password
    printf("Generated Password: %s\n", password);

    // Free allocated memory
    free(password);

    return 0;
}
