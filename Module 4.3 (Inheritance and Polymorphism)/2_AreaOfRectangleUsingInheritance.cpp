#include <iostream>
using namespace std; 

class Area{
	protected:
	int number1;
	int number2; 
	protected:
	void get(){
		cout<<"\nEnter two numbers to calculate area of Rectangle :"; 
		cin>>number1>>number2; 
	}

};

class Rectangle:public Area{
	public:
	void formula(){
		get();
		cout<<"The area of the two numbers are " <<(number1*number2); 
	}
};

int main(){
	Rectangle b1; 
	b1.formula();
	
	
	
}
