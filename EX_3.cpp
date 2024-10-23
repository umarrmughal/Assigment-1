/*#include <iostream>;
using namespace std;

int main(){
	char opt;
	int num1,num2; 
	
	cout<<"enter the first number: ";
	cin>>num1;
	
	cout<<"enter the second number: ";
	cin>>num2;
	
	cout<<"enter the operator: ";
	cin<<opt;
	
	switch(opt){
		case'+':
			cout<<"the sum is "<<(num1 +num2);
			break;
		case'-':
			cout<<"the subtract is "<<(num1 -num2);
			break;
		case'*':
			cout<<"the product is "<<(num1 *num2);
			break;
		case'/':
			cout<<"the division is "<<(num1 /num2);
			break;
		default:
			cout<<"!INVALID operator!";
	}
}*/

#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
