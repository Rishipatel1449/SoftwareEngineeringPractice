#include<iostream>
using namespace std; 
template <typename T> 

T arraySorter(T array[], int size){
	int store[size]; //copy 
	for(int i = 0; i < size; i++){
		store[i] = array[i]; 	
	}
	cout << "\nPrevious array : ";
	for(int i = 0; i < size; i++){
		cout<<" "<<array[i]<<" "; 	
	}
	int right = 1; 
	int n = 0; 
	while (n <= size-1){
	right = 1; 
	for(int left = 0; left < size - 1; left++){
		int temp; 	
		if(store[left] > store[right]){
			temp = store[left]; 
			store[left] = store[right]; 
			store[right] = temp; 	
		}
		right++; 
	}
	n++; 
	}
	cout << "\n array sorted : ";
	for(int i = 0; i < size; i++){
		cout<<" " <<store[i]<< " "; 	
	}
	
	
}

int main(){
	int arr[] = {6,4,32,78,5,10,65,99,100,36}; 
	arraySorter<int>(arr,10); 
	return 0; 
	
}

