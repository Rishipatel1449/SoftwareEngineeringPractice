#include <stdio.h>
#include <string.h>

void findLargestSmallestWords(const char *str) {
    char word[50], largestWord[50], smallestWord[50];
    int i, j, wordLength;
    int smallestLength = 9999; 
    int largestLength = 0;
    for (i = 0; str[i] != '\0'; ++i) {
  
        if (str[i] == ' ' || str[i] == '\0') {

            word[j] = '\0';
            wordLength = strlen(word);
            if (wordLength > 0) {
                if (wordLength < smallestLength) {
                    smallestLength = wordLength;
                    strcpy(smallestWord, word);
                }
                if (wordLength > largestLength) {
                    largestLength = wordLength;
                    strcpy(largestWord, word);
                }
            }
            j = 0;
        } else {
     
            word[j++] = str[i];
        }
    }

    printf("Smallest Word: %s\n", smallestWord);
    printf("Largest Word: %s\n", largestWord);
}

int main() {
    char inputString[500];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    findLargestSmallestWords(inputString);

    return 0;
}
