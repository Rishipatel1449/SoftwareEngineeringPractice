#include <stdio.h>

int main(void){
	int a,b, n; 
	printf("Enter two values in the calculator : "); 
	scanf("%d %d", &a, &b); 
	printf("What do you want to do \n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Modulous\t "); 
	scanf("%d", &n); 
	
	switch(n){
		case 1: printf("Addition : %d", (a+b)); 
				break;  
		case 2: printf("Subtraction : %d", (a-b)); 
				break;
		case 3: printf("Division : %d", (a/b)); 
				break;
		case 4: printf("Multiplication : %d", (a*b)); 
				break;
		case 5: printf("Remainder : %d", (a%b)); 
				break;
		default : printf("Try Again !!!");
				break; 
	} 
}
	
