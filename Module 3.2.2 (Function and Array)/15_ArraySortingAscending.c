#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    // Accepting input from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sorting the array in ascending order
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap if the current element is greater than the next element
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
