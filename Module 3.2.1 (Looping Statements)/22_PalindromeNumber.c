#include <stdio.h>

int main()
{
    int number; 
    printf("Enter a number\t"); 
    scanf("%d", &number); 
    int number2 = number; 
    int mod,  reverse; 
    do{
        mod = number%10; 
        reverse = reverse *10 + mod; 
        number = number/10;
        
    }while(number >0); 
    if(number2 == reverse){
        printf("\nPalindromic number\n");
    }else{
        printf("\nNot a Palindromic number\n"); 
    }

    return 0;
}

