#include <stdio.h>

int main() {
    char string[100];
    printf("Enter to find the length of the word : ");
    fgets(string, sizeof(string), stdin);
    int counter = -1; // Initialize counter to 0
    int i = 0;

    while (string[i] != '\0') {
        counter++;
        i++;
    }

    printf("The length is %d", counter);

    return 0;
}

