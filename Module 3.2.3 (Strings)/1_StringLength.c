#include <stdio.h>

int main()
{
   char string[100];
   printf("Enter to find the length of the word : "); 
   scanf("%s", string); 
   int counter; 
   for(int i = 0; i < 100 ; i++){
       if(string[i] != '\0'){
           counter++; 
       }
   }
    printf("The length is %d", counter); 
}

