#include <iostream>
using namespace std; 

class calculator{
	private:
	 int number1;
	 int number2; 
	public :
		calculator(){
			cout<<"-----------Menu-----------\n"; 
			cout<<"Enter : \n + --> Addition \n - -->Subtraction\n * --> Multiplication\n / --> Divide \n % --> Remainder\n";
		}
		char choice;
		private:
		void get(){
			cout<<"Enter Number 1 :" ;
			cin>> number1; 
			cout <<"Enter Number 2 :"; 
			cin>>number2;  
		}
		public:
		void add(){
			int result; 
			get(); 
			result = number1 + number2; 
			cout<<"The result is : "<<result; 
		}
		void subtract(){
			int result; 
			get(); 
			result = number1 - number2; 
			cout<<"The result is :  "<<result; 
		}
		void multi(){
			int result; 
			get(); 
			result = number1 * number2; 
			cout<<"The result is :  "<<result; 
		}
		void divide(){
			int result; 
			get(); 
			result = number1 / number2; 
			cout<<"The result is :  "<<result; 
		}
		void remainder(){
			int result; 
			get(); 
			result = number1 % number2; 
			cout<<"The result is : "<<result; 
		}
		
};
int main(void){
	calculator obj; 
	cout<<" Enter choice : "; 
	cin>>obj.choice; 
	switch(obj.choice){
		case '+': obj.add(); 
					break;
		case '-':  obj.subtract();
					break; 
		case '*':obj.multi(); 
				break; 
		case '/': obj.divide(); 
				break; 
		case '%': obj.remainder();
				break; 
		default : cout<<"Invalid Response !!";
	}
	
}
