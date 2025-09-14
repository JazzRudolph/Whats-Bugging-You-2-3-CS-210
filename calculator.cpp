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
	// removed char statement[100];
	double op1, op2; // changed int to double to allow for decimal calculations
	char operation;
	char answer='Y'; // change duble quotes to single quotes and added semicolon

	while (answer=='Y' || answer=='y') //added the || operator and added 'Y' so user can enter ethier case
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2; //switcherd op 1 and op2 placement
		if (operation == '+') //Removed semicolons and changed "" to ''
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Changed >> to <<
		else if (operation == '-') //Removed semicolons and added else if
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		else if (operation == '*') //Added else if
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Changed / to * and added ;
		else if (operation == '/') //Added else if
		{
			if (op2 == 0) //Added check for division by zero
			{
				cout << "Error: Can not divide by 0." << endl; // Skip if not divided by 0
			}
			else
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
				 // Changed * to / 
			
		}
		else //Added else statement to catch invalid operators
		{
			cout << "Error: Invalid operator." << endl;
			continue; // Skip to next iteration of loop
		}


		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}

	cout << "Program Finished" << endl; // Message to show program has ended
	
    return 0; //Added return 0 to complete the program
}



