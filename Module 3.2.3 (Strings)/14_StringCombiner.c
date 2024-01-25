#include <stdio.h>

int main() {
    char string1[50], string2[50];
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);

    int i, j;
    for (i = 0; string1[i] != '\0'; ++i);

    for (j = 0; string2[j] != '\0'; ++j, ++i) {
        string1[i] = string2[j];
    }

   
    string1[i] = '\0';


    printf("Combined String: %s\n", string1);

    return 0;
}
