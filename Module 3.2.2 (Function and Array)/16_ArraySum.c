#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");

    // Accepting input from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Displaying the sum of the array
    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}
