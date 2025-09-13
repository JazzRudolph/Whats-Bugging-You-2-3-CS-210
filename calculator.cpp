/*
 * Calculator.cpp
 *
 *  Date: 9/10/2025
 *  Author: Jazz Rudolph
 */

#include <iostream>

using namespace std;

int main() //Changed void to int so it returns 0
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer='Y'; // change duble quotes to single quotes and added semicolon
	while (answer=='y')
	{
		cout << "Enter expression" <<endl;
		cin >> op2 >> operation >> op1;
		if (operation == "+") //Removed semicolons
			cout << op1 << " + " << op2 >> " = " << op1 + op2 << endl;
		if (operation == '-') //Removed semicolons
			cout >> op1 << " - " << op2 << " = " << op1 - op2 << endl;
		if (operation == '*')
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl
		if (operation == '/')
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
    return 0; //Added return 0 to complete the program
}



