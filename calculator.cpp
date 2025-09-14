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
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2; //switcherd op 1 and op2 placement
		if (operation == "+") //Removed semicolons
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Changed >> to <<
		if (operation == '-') //Removed semicolons
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		if (operation == '*')
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Changed / to * and added ;
		if (operation == '/')
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // Changed * to / and added 

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
    return 0; //Added return 0 to complete the program
}



