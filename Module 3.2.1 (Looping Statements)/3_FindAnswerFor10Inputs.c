#include <stdio.h>

int main()
{
    int number[10];
    int sum1,sum2,even,odd; 

    for(int i = 0; i < 10; i++){
        printf("Enter 10 numbers :"); 
        scanf("%d",&number[i]); 
    }
    for(int i = 0; i < 10; i++){
       if(number[i] % 2 == 0){
           even+=1; 
           sum1 +=number[i]; 
       }else{
           odd+=1; 
           sum2 +=number[i]; 
       }
    }
    printf("\nTotal Even Numbers : %d ",even );
    printf("\nTotal Odd Numbers : %d ",odd );
    printf("\nSum of all Even Numbers : %d ",sum1 );
    printf("\nsum of all odd Numbers : %d ",sum2 );
}

