#include <iostream>
using namespace std; 
class Car{
	private: 
		string company; 
		string model; 
		int year; 
	public:
	 Car(){
		cout<<"Enter company of car"; 
		cin>>company; 
		cout<<"Enter model of the car"; 
		cin>>model; 
		cout<<"Enter year"; 
		cin>>year; 
	}
};



int main(){
	Car audi;
	
}
