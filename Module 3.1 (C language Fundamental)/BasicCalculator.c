#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter Two Numbers \n");
	scanf("%d",&a); 
	scanf("%d",&b); 
	int add,divide,subtract,multiply,mod; 
	add = a +b;
	subtract = a-b; 
	multiply = a*b; 
	divide = a/b; 
	mod = a%b;  
	printf("Addition : %d \n", add );
	printf("Multiply : %d \n", multiply );
	printf("Subtract : %d \n", subtract );
	printf("Divide : %d \n", divide  );
	printf("Remainder : %d\n ", mod );
	 
	
}
