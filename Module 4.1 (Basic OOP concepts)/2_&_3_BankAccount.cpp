#include <iostream>
using namespace std; 
class bankAccount{
	private:
		string name; 
		string type;
		float Account_number; 
		float balance; 
	public:
		int choice; 
		void get(){
			cout<<"Enter Name : "; 
			cin>>name; 
			cout<<"\nEnter Which account you want to create \n"<<" Checkings Or Savings "; 
			cin>>type; 
			cout<<"\nEnter the Balance You have in your account";
			cin>>balance;
			cout<<"\nEnter Account number : "; 
			cin>>Account_number; 
		}
		void menu(){
			cout<<"\n--------Menu---------\n"; 
			cout<<"1.Deposit\n";
			cout<<"2.Withdraw\n"; 
			cout<<"3.Display Balance\n";
			cout<<"4.Quit\n";   
			
		}
		void deposit(){
			float number;
			cout<<"\nEnter amount to be deposited : "; 
			cin>>number; 
			balance+=number; 
			cout<<"\nNew Account balance is "<<balance; 
			
		}
		void withdraw(){
			float number;
			cout<<"\nEnter amount to be withdraw : "; 
			cin>>number; 
			if(number > balance){
				cout<<"\nAmount exceeds Balance"; 
			}else{
			
			balance-=number; 
			cout<<"\nNew Account balance is "<<balance; 
			}
		}
		void display(){
			cout<<"\nAccount Holder :"<<name; 
			cout<<"\nBalance : "<<balance; 
			cout<<"\nAccout number : "<<Account_number<<"\nAccount Type :"<<type; 
		}
};
int main(void){
	bankAccount b1;
	b1.menu(); 
	cout<<"\nEnter your choice :"; 
	cin>>b1.choice; 
	if(b1.choice == 4){
			cout<<"\nThank you for doing business with us.....";  
			return 0;  
	}
	b1.get();
	while(true){
		if(b1.choice == 4){
			cout<<"\nThank you for doing business with us.....";  
			break;  
		} else{
			 
			switch(b1.choice){
				case 1: b1.deposit(); 
						break; 
				case 2: b1.withdraw(); 
						break; 
				case 3: b1.display(); 
						break; 
				default : cout<<"Invalid choice Try again"; 
				
			}
			cout<<"\nDo you want to continue....."; 
			b1.menu();
			cout<<"\nEnter your choice :"; 
			cin>>b1.choice;  
		}
		
		
		
	}
	return 0; 
	
}
