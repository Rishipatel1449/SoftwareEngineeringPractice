#include <stdio.h>

int main(void){
	float rate,time,principle, simpleInterest;
	printf("Enter rate :");  
	scanf("%f",&rate); 
	printf("\nEnter time in terms of year :"); 
	scanf("%f", &time); 
	printf("\nEnter principle :"); 
	scanf("%f",&principle); 
	
	simpleInterest = (rate/100.0)*(principle)*(time); 
	
	printf("Money after the Interest is : %0.2f", (simpleInterest + principle)); 
	return 0; 
}
