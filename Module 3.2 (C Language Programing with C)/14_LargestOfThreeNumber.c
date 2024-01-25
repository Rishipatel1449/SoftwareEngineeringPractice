#include <stdio.h>

int main(void){
	int a,b,c;
	printf("Enter three Numbers \n");
	scanf("%d %d %d",&a, &b,&c);  
	(a > b && a > c) ? printf("A is the largest") : (b > a && b > c) ? printf("B is the largest") : printf("C is the largest"); 
	
}

