#include <stdio.h>

int main() {
    char string[100];
    char stringB[100]; 
    
    scanf("%s %s",string, stringB); 
    for(int i = 0; i < 100; i++){
        if(string[i] != stringB[i]){
            printf("Not the same"); 
            return 1;
        }
    }
    printf("Same Word");
}


