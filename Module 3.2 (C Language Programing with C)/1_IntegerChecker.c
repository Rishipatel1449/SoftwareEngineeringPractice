#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter Two Numbers \n");
	scanf("%d",&a); 
	scanf("%d",&b); 
	
	if(a == b){
		printf("Same");
		return 0;  
	}
	
	printf("Different"); 
	return 1; 
	
	
}
