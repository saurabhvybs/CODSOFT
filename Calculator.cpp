// C++ program of a basic Calculator.
#include <iostream>
using namespace std;

int main()
{
	char choice;// user choice is stored here
	float num1, num2;
    cout << "Enter a Operator to Execute:+,-,*,/:  ";
	// It allows user to enter operator
	// i.e. +, -, *, /
	cin >> choice;
    cout << "Enter Two Values to Execute Operation :  ";

	// Taking values of two no.
	cin >> num1 >> num2;
    //Using switch to 
	switch (choice) {
	// If user enter +
	case '+':
		cout << "THE SUM IS: " << num1 + num2;
		break;

	// If user enter -
	case '-':
		cout << "THE SUBTRACTION IS: " << num1 - num2;
		break;

	// If user enter *
	case '*':
		cout << "THE MULTIPLICATION IS: " << num1 * num2;
		break;

	// If user enter /
	case '/':
		cout << "THE DIVISION IS: " << num1 / num2;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}

	return 0;
}
