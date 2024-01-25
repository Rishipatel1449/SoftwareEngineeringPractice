#include <stdio.h>
#include<math.h>

int main()
{
    int number; 
    int digit; 
    printf("Enter a number \t");
    scanf("%d",&number); 
    int number2 = number; //copy number to number2
    printf("Enter a digit\t");
    scanf("%d",&digit); 
    int sum = 0; 
     
    int counter =0; 
    do{
        counter =0; 
        int mod = number%10; //mod 10 gets remainder
        //sum+= pow(mod,digit); 
        int multi = 1;
        while(counter < digit){
            
            multi*= mod; 
            counter++; 
        }
        sum+=multi;
        number/=10; 
      
    }while(number > 0); 
    if(sum == number2){
        printf("Armstrong"); 
    }else {
        printf("False"); 
    }
    
    
}
