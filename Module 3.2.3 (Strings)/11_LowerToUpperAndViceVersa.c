#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string[100];
    printf("Enter a string word : ");
    fgets(string, sizeof(string), stdin);
    int i = 0; 
    while(string[i] != '\0'){
    if(string[i] >= 'A' && string[i] <= 'Z'){
        string[i] =tolower(string[i]); 
    }else{
        
        string[i] = toupper(string[i]); 
    }
    i++;
    }
    printf("%s", string); 
    

    return 0;
}

