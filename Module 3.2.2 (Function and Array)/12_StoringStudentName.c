#include <stdio.h>

int main() {
    char names[5][50];

    printf("Enter names of 5 students:\n");

    // Accepting input from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Displaying the entered names
    printf("Entered student names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", names[i]);
    }

    return 0;
}
