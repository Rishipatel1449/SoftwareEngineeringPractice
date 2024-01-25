#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter Two Numbers \n");
	scanf("%d",&a); 
	scanf("%d",&b); 
	int circle,rectangle,triangle; 
	circle = 3.14* a*a; 
	rectangle = a*b; 
	triangle = 0.5* (a*b); 
	printf("Area of circle A  : %d \n", circle );
	printf("Area of Triangle : %d \n", triangle );
	printf("Area of rectangle : %d \n", rectangle );
	circle = 1; 
	circle = 3.14 * b*b; 
	printf("Area of circle B  : %d \n", circle );
	
}
