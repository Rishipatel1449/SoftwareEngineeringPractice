#include <stdio.h>

int main(void){
	int number; 
	printf("Enter a number"); 
	scanf("%d", &number); 
	int result = (number % 2 == 0) ? printf("Even") : printf("Odd"); 
}
