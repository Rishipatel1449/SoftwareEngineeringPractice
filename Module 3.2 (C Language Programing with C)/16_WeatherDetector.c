#include <stdio.h>

int main(void){
	float temperature;
	printf("Enter the temperature :");
	scanf("%f",&temperature); 
	
	
	if(temperature < 0){
		printf("Freezing Weather"); 
	} else if(temperature >=0 && temperature <= 10){
		printf("Very cold Weather");
	}else if(temperature > 10 && temperature <=20 ){
		printf("Cold temperature"); 
	}else if(temperature > 20 && temperature <=30){
		printf("Normal temperature"); 
	}else if(temperature > 30 && temperature <=40){
		printf("Hot temperature"); 
	}else{
		printf("Very Hot ");
	}
	
}
