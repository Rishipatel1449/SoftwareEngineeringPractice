#include <stdio.h>

int main(void){
	int time; 
	printf("Enter number : "); 
	scanf("%d",&time); 
	
	if(time > 365){
	
	printf("Years : %d", (time/365)); 
	}else{
		printf("Days : %d",time); 
	}
	
	
}
