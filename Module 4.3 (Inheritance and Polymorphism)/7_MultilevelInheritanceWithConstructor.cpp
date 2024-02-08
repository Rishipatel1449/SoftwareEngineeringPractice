#include <iostream>

using namespace std; 

class student{
	protected:
	int rollnumber[10];
	int number;
	public:
    // Constructor to initialize the array
    student() {
        for (int i = 0; i < 10; i++) {
            rollnumber[i] = -1; // Initialize to a specific value (e.g., -1) to mark as empty
        }
    }
    protected:
    void rollnumberRegister() {
        cout << "Enter Rollnumber: ";
        cin >> number;

        for (int i = 0; i < 10; i++) {
            if (rollnumber[i] == number || number < 0) {
                cout << "Enter another number: ";
                cin >> number;
                i = -1; // Start checking from the beginning again
            }
        }

        for (int i = 0; i < 10; i++) {
            if (rollnumber[i] == -1) {
                rollnumber[i] = number;
                break;
            }
        }

        cout << "\nYour roll number is: " << number;
    }

    void display() {
        for (int i = 0; i < 10; i++) {
        	 if (rollnumber[i] != -1) {
                cout << "\nStudent " << i << " roll number is " << rollnumber[i];
        }
    }
	}
};

class Test :public virtual student{
	protected:
	int math,physics;
	void getScore(){
		rollnumberRegister(); 
		cout<<"\nEnter score for math and physics"; 
		cin>>math>>physics; 
	}
	
};

class Total: protected virtual Test{
	public:
	void result(){
		getScore(); 
		cout<<"\nThe total score is "<<((math + physics)/2);
	}
};

class TeacherAccess : public virtual student, public virtual Total{
	using student::display;
	public:
	void totalStudent(){
		cout<<"\nRoll number database is :";
		display(); 
	}
};


int main(){
	TeacherAccess t2; 
	t2.result();
	t2.totalStudent();
}
