#include <stdio.h>

int main(void){
	char value; 
	printf("Enter a number to see if its a special character, lowercase or uppercase ? : "); 
	scanf("%c", &value);
	
	int number = value; 
	
	if(number >= 31 && number <=47 ){
		printf("Special Character"); 
	}else if(number >=65 && number <=90 ){
		printf("Upper Case"); 
	}else if(number >=97 && number <=122 ) {
		printf("Lower Case"); 
		
	}else {
		printf("Other Character"); 
	}
	
	return 0; 
}
