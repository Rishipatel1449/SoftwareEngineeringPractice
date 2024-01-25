#include <stdio.h>

int main()
{
    int number[5]; 

    for(int i = 0; i < 5; i++){
        printf("Enter 5 numbers :"); 
        scanf("%d",&number[i]); 
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n",number[i]); 
    }
}
