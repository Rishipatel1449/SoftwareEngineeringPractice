#include <stdio.h>

int main()
{
    char num = 'A'; 
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i;  j++){
            printf("%c",num++);
        }
        printf("\n");
    }
}

