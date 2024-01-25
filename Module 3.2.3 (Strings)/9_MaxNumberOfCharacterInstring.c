#include <stdio.h>

int main() {
    char string[100];
    printf("Enter a string word : ");
    fgets(string, sizeof(string), stdin);
   int previous = -3;
   int i =0;
    while (string[i] != '\0') {
        int counter; 
        
       if(string[i] != ' '){
           counter++;
           if(previous < counter){
           previous = counter; 
            }
       }else{
           counter = 0; 
       }
       i++;
      
        
    }
     printf("The max length is %d", previous); 
    

    return 0;
}

