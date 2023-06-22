/*
Course: CS215-008
Project: Lab 4
Datw: 2/10/23
Purpose: Create a program that asks the user to input an integer[1,30] as the size n draws a triangle upside, turned 90 degrees, and turned 180 degrees
Author: Joyce Yang
*/

#include <iostream>
using namespace std;


//draw the triangle
void drawTri(int n)
{
	//create the rows of the *
	for (int i = 1; i <= n; i++){
		//create spaces
		for (int j = i; j <= n; j++)
			cout << " ";
		//create the columns
		for (int k = 1; k < i; k++)
			cout << "*";
		for (int z = 1; z <= i; z++)
			cout << "*";
		cout << endl;
	}
}


//turn the triangle 90 degrees
void drawTriR90(int n)
{
	//create rows
	for (int i=1;i<n;i++)
	{
		//create the top half of the turned triangle
		for (int j = 1; j <= i; j++)
			cout << "* ";
		cout << endl;
	}
	//create the bottom part of the turned triangle
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
			cout << "* ";
		cout << endl;
	}
}

//turn the triangle 180 degrees
void drawTriR180(int n)
{
	//create the rows
	for (int i = 1; i <= n; i++){
		//create the spaces
		for (int j = 1; j <= i; j++)
			cout << " ";
		//create the columns
		for (int k = i; k < n; k++)
			cout << "*";
		for (int z = i; z <= n; z++)
			cout << "*";
		cout << endl;

	}

}


int main() 
{
	bool matched = false;
	//intepreting user input
	while (!matched)
	{
		//ask the user for the size of the triangle
		cout << "Enter the size of your triangle(integer in [1,30])" << endl;
		cout << "Type Q to quit the program: ";
		//take in the user input
		int user_input;
		cin >> user_input;
		//if the user input does not have a number first
		while (cin.fail())
		{
			//clear
			cin.clear();
			//turn the user input into a string
			string check_input;
			cin >> check_input;
			//ignore everything other than the number
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			//check to see if user enter q, which means to quit
			if (check_input == "Q" || check_input == "q")
			{
				
				cout << "Thank you, have a great day!" << endl;
				return matched = true;
			}
			else
			{
				//see if the size is valid
				cout << "Invald size!" << endl;
				//ask user for another input
				cout << "Enter the size of your triangle(integer in [1,30])" << endl;
				cout << "Type Q to quit the program: ";

				
				cin >> user_input;
			}

		}
		//clear everything after the number, now we want to floor the number

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		int floored_num = user_input;
		if (floored_num >= 1 && floored_num <= 30)
		{
			//print the triangle
			cout << "The triangle with size " << floored_num << " is: " << endl;
			drawTri(floored_num);
			//print the triangle rotated 90 degrees
			cout << "The rotation for 90 degrees clockwise: " << endl;
			drawTriR90(floored_num);
			//print the triangle rotated 180 degrees
			cout << "The rotation for 180 degrees clockwise: " << endl;
			drawTriR180(floored_num);

			

			
		}
		else
		{
			//if the number is not in range, print...
			cout << "The size is not in the correct range!"<<endl;
			cin.clear();



		}
	}

	return 0;
}
