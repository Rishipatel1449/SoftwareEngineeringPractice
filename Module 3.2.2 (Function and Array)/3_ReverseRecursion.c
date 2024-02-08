#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    if (strlen(str) == 0) {
        return;
    }
    reverseString(str + 1);
    printf("%c", str[0]);
}

int main() {
    char str[] = "hello";
    printf("Original String: %s\n", str);
    printf("Reversed String: ");
    reverseString(str);
    printf("\n");
    return 0;
}
