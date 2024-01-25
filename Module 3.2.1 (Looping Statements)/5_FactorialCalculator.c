#include <stdio.h>

int main()
{
    int number; 
    int result = 1; 
   printf("Enter number you want the factorial off : "); 
   scanf("%d",&number); 
    int copy = number; 
   do{
      
       result*=copy; 
       copy--; 
   }while(copy >= 1); 
   
    printf("The factorial is : %d", result); 
    
}
