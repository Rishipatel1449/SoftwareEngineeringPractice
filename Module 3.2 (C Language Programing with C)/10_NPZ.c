#include <stdio.h>

int main(void){
	int a;
	printf("Enter a Numbers \n");
	scanf("%d",&a);  
	if(a>0){
		printf(" Positive");
		return 0;  
	}else if (a == 0){
		printf("Zero"); 
	}else {
		printf("Negative"); 
	}
	
}

