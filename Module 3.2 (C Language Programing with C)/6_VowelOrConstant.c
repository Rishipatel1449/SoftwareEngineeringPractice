#include <stdio.h>

int main(void){
	char a;
	printf("Enter a character \n");
	scanf("%c",&a);  
	if(a == 'a' || a == 'i '|| a == 'e' || a == 'o' || a == 'u'){
		printf("Character you enter is a Vowel");
		return 0;  
	}else {
		printf("Character you enter is a constant"); 
	}
}
