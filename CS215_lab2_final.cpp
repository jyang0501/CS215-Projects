/*
Course: 215-008
Project: Lab 2
Purpose: To get continue practicing with inputs/outputs,variables, and basic operations, and start practicing using conditional statement
Author: Joyce Yang
*/


#include <iostream>

using namespace std;

int main()
{
	//interacting with user
	cout << "Your wish is my command!" << endl;
	cout << "I will sort three numbers under your wish: " << endl;

	// ask user if they want their number in increassing or decreasing order
	cout << "Enter I for increasing ordering, D for decrease ordering(I or D): ";
	string ordering;
	cin >> ordering;

	//if-statement for increasing order
	if (ordering == "I" || ordering == "i")
	{
		cout << "Please enter three integer numbers: " << endl;
		int num1, num2, num3;
		cin >> num1 >> num2 >> num3;
		cout << "Numbers are sorted in increasing order:" << endl;
		if (num1 == num2 && num2 == num3 && num3 == num1)
		{
			cout << num1 << " --> " << num2 << " --> " << num3 << endl;

		}
		else if (num1 >= num2 && num1 >= num3 && num2 >= num3)
		{
			cout << num3 << " --> " << num2 << " --> " << num1 << endl;

		}
		else if (num2 >= num3 && num2 >= num1 && num3 >= num1)
		{
			cout << num1 << " --> " << num3 << " --> " << num2 << endl;

		}
		else if (num3 >= num1 && num3 >= num2 && num1 >= num2)
		{
			cout << num2 << " --> " << num1 << " --> " << num3 << endl;

		}
		else if (num3 >= num2 && num3 >= num1 && num2 >= num1)
		{
			cout << num1 << " --> " << num2 << " --> " << num3 << endl;

		}
		else if (num2 >= num1 && num2 >= num3 && num1 >= num3)
		{
			cout << num3 << " --> " << num1 << " --> " << num2 << endl;

		}
		else
		{
			cout << num2 << " --> " << num3 << " --> " << num1 << endl;

		}
		//printing kind of increasing order
		if (num1 == num2 || num2 == num3 || num1 == num3)
		{
			cout << "Numbers are in leniently increasing order!" << endl;
		}
		else
		{
			cout << "Numbers are in strictly increasing order!" << endl;
		}

	}

	//if-statement for decreasing order
	else if (ordering == "D" || ordering == "d")
	{
		cout << "Please enter three integer numbers: " << endl;
		int num1, num2, num3;
		cin >> num1 >> num2 >> num3;
		cout << "Numbers are sorted in decreasing order:" << endl;
		if (num1 == num2 && num2 == num3 && num3 == num1)
		{
			cout << num1 << " <-- " << num2 << " <-- " << num3 << endl;

		}
		else if (num1 <= num2 && num1 <= num3 && num2 <= num3)
		{
			cout << num3 << " <-- " << num2 << " <-- " << num1 << endl;

		}
		else if (num2 <= num3 && num2 <= num1 && num3 <= num1)
		{
			cout << num1 << " <-- " << num3 << " <-- " << num2 << endl;

		}
		else if (num3 <= num1 && num3 <= num2 && num1 <= num2)
		{
			cout << num2 << " <-- " << num1 << " <-- " << num3 << endl;

		}
		else if (num3 <= num2 && num3 <= num1 && num2 <= num1)
		{
			cout << num1 << " <-- " << num2 << " <-- " << num3 << endl;

		}
		else if (num2 <= num1 && num2 <= num3 && num1 <= num3)
		{
			cout << num3 << " <-- " << num1 << " <-- " << num2 << endl;

		}
		else
		{
			cout << num2 << " <-- " << num3 << " <-- " << num1 << endl;

		}
		//printing kind of decreasing order
		if (num1 == num2 || num2 == num3 || num1 == num3)
		{
			cout << "Numbers are in leniently decreasing order!" << endl;
		}
		else
		{
			cout << "Numbers are in strictly decreasing order!" << endl;
		}



	}
	else//quitting the program for not entering i,I,d, or D
	{
		cout << "Invalid choice, quitting the program..." << endl;
	}

	return 0;
}