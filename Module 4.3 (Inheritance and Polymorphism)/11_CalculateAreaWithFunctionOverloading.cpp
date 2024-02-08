#include <iostream>

using namespace std;
class AreaFinder{
	private:
	int n1,n2;
	
	public:
		 void Area(double n1, const double pi= 3){
		 	cout<<"Area of Circle is :" <<((n1*n1*pi)); 
		 }
		  void Area(){
		  	cout<<"Enter two number"; 
		  	cin>>n1>>n2; 
		 	cout<<"Area of rectangle is :"<<(n1*n2);			 
		 }
		void Area(int n1, int n2){
		 	cout<<"Area of Trianglie  is :" <<(0.5*n1*n2); 
		 }
		void Area(int n1){
		 	cout<<"Area of square  is :" <<(n1*n1); 
		 }
};

int main(){
	AreaFinder a1; 
	int choice; 
	cout<<"\n1.Circle\n2.Rectangle\n3.Triangle\n4.Square"; 
	cout<<"\nEnter your choice : "; 
	cin>>choice; 
	
	switch(choice){

	case 1: a1.Area(2.0);
			break; 
	case 2: a1.Area(); 
			break; 
	case 3: a1.Area(4,4);
			break; 
	case 4: a1.Area(5);
			break; 
	default : cout<<"Invalid choice"; 
				break; 
		}
}
