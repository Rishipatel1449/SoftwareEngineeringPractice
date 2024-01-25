#include <stdio.h>

int main()
{
   char string[100];
   printf("Enter a string : "); 
   scanf("%s", string); 

   for(int i = 0; i < 100 ; i++){
       printf("%c\n",string[i]); 
   }
  
}
