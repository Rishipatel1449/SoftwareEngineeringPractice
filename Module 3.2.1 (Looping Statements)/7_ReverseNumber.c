#include <stdio.h>

int main() {
    int n, i, mod, divi;

    printf("Enter the number of you want to reverse "); 
    scanf("%d", &n);
    
    while(n != 0){
        mod = n % 10; //gives me the last digit
        i = i* 10 + mod; 
        n/=10; // gets rid of the last digit
    }
    printf("The reverse number is %d",i ); 
}
