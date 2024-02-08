#include <iostream>
using namespace std; 
template <typename T> 

T swapValue(T n1, T n2){
	T n3; 
	cout <<"\nN1  was "<<n1; 
	cout <<"\nN2 was " << n2; 
	 n3 = n1; //1 = temp 
	 n1 = n2; 
	 n2 = n3;  
	
	cout <<"\nN1  is "<<n1; 
	cout <<"\nN2 is " << n2; 
}

int main(){
	swapValue<int>(9,6); 
	return 0; 
}

