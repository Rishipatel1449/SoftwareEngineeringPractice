#include <iostream>
using namespace std; 

class Person{
	private:
	string name;
	int age;
	protected:
	void get(){
		cout<<"\nEnter name :"; 
		cin>>name; 
		cout<<"\nEnter age : "; 
		cin>>age; 
	}
	void display(){
		cout<<"\nThe Person's name is : "<<name; 
		cout<<"\n And the age is : " <<age; 
	}
};

class Student:public Person{
	public:
	double percentage; 
	void percentageCalculator(int s1, int s2, int s3){
		get(); 
		display(); 
		cout<<"\nThe Student got a "<<((s1+s2+s3)/3)<<"%"; 
	}
};

class Teacher:public Person{
	double salary; 
	public:
		void determineSalary(){
			int experience; 
			int studentTeachInayear; 
			get(); 
			cout<<"\nHow many years have you had Experience Teaching";
			cin>>experience; 
			cout<<"\nHow many students this year you want to teach"; 
			cin>>studentTeachInayear; 
			
			display();
			cout<<"\n....................."; 
			cout<<"\nBased on your criteria and eligibility.........";
			cout<<"\nYour annul salary is :"<<(experience * studentTeachInayear *1000); 
		}
};

int main(){
	Student s1; 
	Teacher t1;
	
	//s1.percentageCalculator(50,90,100);
	t1.determineSalary();
	
	
}
