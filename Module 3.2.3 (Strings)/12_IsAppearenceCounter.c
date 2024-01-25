#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string[100];
    printf("Enter a string word : ");
    fgets(string, sizeof(string), stdin);
    int i = 0; 
    int counter = 0; 
    while(string[i] != '\0'){
        if(string[i] == 'i' && string[i+1] == 's'){
            counter++; 
            i+=2;
        }
        i++;
    }
    printf("is appeared %d times ", counter); 
    

    return 0;
}

