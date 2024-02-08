#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void performOperation(char operation) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "Sum is: " << (num1 + num2);
                break;
            case '-':
                cout << "Difference is: " << (num1 - num2);
                break;
            case '*':
                cout << "Product is: " << (num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Quotient is: " << (num1 / num2);
                } else {
                    cout << "Cannot divide by zero.";
                }
                break;
            default:
                cout << "Invalid operation";
        }
    }

    void performOperation(int n1, int n2) {
        cout << "Result of addition is: " << (n1 + n2);
    }

    void performOperation(double n1) {
        cout << "Square of " << n1 << " is: " << (n1 * n1);
    }
};

int main() {
    Calculator calculator;
    int choice;

    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Custom Addition\n6. Custom Square";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
            char operation;
            cout << "Enter operation (+, -, *, /): ";
            cin >> operation;
            calculator.performOperation(operation);
            break;
        case 5:
            int customNum1, customNum2;
            cout << "Enter two numbers for custom addition: ";
            cin >> customNum1 >> customNum2;
            calculator.performOperation(customNum1, customNum2);
            break;
        case 6:
            double customNum;
            cout << "Enter a number for custom square: ";
            cin >> customNum;
            calculator.performOperation(customNum);
            break;
        default:
            cout << "Invalid choice";
            break;
    }

    return 0;
}
