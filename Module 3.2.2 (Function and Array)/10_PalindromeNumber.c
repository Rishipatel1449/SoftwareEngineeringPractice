#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int isPalindrome(char str[]) {
    char original[100];
    strcpy(original, str);
    reverseString(str);
    return strcmp(original, str) == 0;
}

int main() {
    char str[] = "radar";
    printf("Original String: %s\n", str);
    reverseString(str);
    printf("Reversed String: %s\n", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
