#include <stdio.h>

int main()
{
   char string[50]; 
   printf("Enter a string to print in reverse order"); 
   scanf("%s",string); 
   
   for(int i = 50; i >= 0; i--){
       printf("%c",string[i]); 
   }
}
