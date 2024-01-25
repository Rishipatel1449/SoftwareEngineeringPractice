#include <stdio.h>

int main(void){
	int a;
	printf("Enter your height in cm \n");
	scanf("%d",&a);  
	if(a>152 && a <182){
		printf("Normal");
		return 0;  
	}else if (a < 152){
		printf("Short"); 
	}else {
		printf("Tall"); 
	}
	
}
