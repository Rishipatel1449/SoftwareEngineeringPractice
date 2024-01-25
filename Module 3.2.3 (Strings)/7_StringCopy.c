#include <stdio.h>

int main() {
    char string[100];
    char stringB[100]; 
    
    scanf("%s",stringB); 
    for(int i = 0; i < 100; i++){
       string[i] = stringB[i]; 
    }
    printf("%s",string); 
}


