#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    // Accepting input from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Displaying numbers in reverse order
    printf("Numbers in reverse order:\n");
    for (int i = 4; i >= 0; --i) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
