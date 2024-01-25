#include <stdio.h>

int main(void){
	float math,physics,chemistry, total; 
	printf("\nMath : "); 
	scanf("%f", &math); 
	printf("\nPhysics :"); 
	scanf("%f",&physics); 
	printf("\nChemistry:"); 
	scanf("%f",&chemistry);
	
	total = math + physics + chemistry;
	
	if(total >= 190){
		printf("You are eligible"); 
	} else if((math + physics) >= 140){
		printf("You are eligible");
	}else {
		printf("Try again later sorry !!"); 
	}
	
}
