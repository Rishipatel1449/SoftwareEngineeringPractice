#include <iostream>
using namespace std; 

class Cricketer{
	private:
	string name;
	protected:
	void get(){
		cout<<"\nEnter name :"; 
		cin>>name; 
	}
	void display(){
		cout<<"\nThe Player name is : "<<name; 
	}
};

class Batsman:public Cricketer{
	public:
	int totalRuns; 
	int AverageRuns; 
	int bestPerformance; 
	void data(){
		get();
		display();
		cout<<"\nEnter Runs : "; 
		cin>> totalRuns; 
		cout<<"Average Run per over in T20 To win is : " <<(totalRuns/20); 
	}
};

int main(){
	Batsman b1; 
	b1.data();
	
	
}
