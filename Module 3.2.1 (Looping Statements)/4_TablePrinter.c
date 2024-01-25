#include <stdio.h>

int main()
{
    int number; 
   printf("Enter which table you want to print"); 
   scanf("%d",&number); 
   for(int i =1; i <= 10;i++){
       printf(" %d x %d is %d\n",number,i,(number * i)); 
   }
    
}

