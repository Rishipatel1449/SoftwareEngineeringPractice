#include <stdio.h>

int main(void){
	float money, earn,lost; 
	printf("Enter how much money invested : "); 
	scanf("%f",&money); 
	printf("\nEnter how much you earned :"); 
	scanf("%f",&earn); 
	printf("\nhow much you spend :"); 
	scanf("%f",&lost);
	
	if(lost > earn){
		printf("Money lost");
	}else {
		printf("Money Earned $$$ Profit");
	}
	return 0; 
}
