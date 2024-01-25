#include <stdio.h>

int main(void){
	int a;
	printf("Enter a Numbers \n");
	scanf("%d",&a);  
	if(a>0){
		printf(" n = 1");
		return 0;  
	}else if (a == 0){
		printf(" n = 0"); 
	}else {
		printf(" n = -1"); 
	}
	
}
