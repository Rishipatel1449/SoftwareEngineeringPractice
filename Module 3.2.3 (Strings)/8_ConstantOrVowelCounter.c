#include <stdio.h>

int main()
{
   char string[100];
   printf("Enter to find the number of vowel or consonatns in the string  : "); 
   scanf("%s", string); 
   int counter = 0,counterb = 0; 
   for(int i = 0; i < 100 ; i++){
       
           if(string[i] == 'a' || string[i] != 'e' ||string[i] != 'i' ||string[i] != 'o' ||string[i] != 'u' ){
               counter++;
           }else{
               counterb++;
           }
       
   }
    printf("The total number of vowel  is %d\n", counter); 
    printf("The total number of consonants is %d", counterb); 
}
