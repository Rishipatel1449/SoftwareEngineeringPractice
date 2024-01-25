#include <stdio.h>

int main(void){
	int leapYear; 
	printf("Enter a year to check if its a leap year or not ?");
	scanf("%d", &leapYear); 
	
	if(leapYear % 4 == 0){
		if(leapYear % 100 == 0 && leapYear %400 != 0){
			printf("%d isn't a leap year",leapYear);
			return 1; 
		}else{
		
			printf("%d is a leap year",leapYear);
			return 0;
		}
	}
	printf("%d isn't a leap year",leapYear); 
}
	
