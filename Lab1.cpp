/*
Course: 215-008
Project: Lab 1
Purpose: To get familiar with Microsoft Visual Studio Code IDE by using variables
         constants, fundamental data types and basic operations
Author: Joyce Yang
*/
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
int main()
{
    //introducing myself
    cout << "Hello, Professor Pike and Aram Ansary Ogholbake." << endl;
    cout << "My name is Joyce Yang. Nice to meet you!" << endl;
    //making the face
    cout << setw(6)<<"  \\" << setw(12)<< "        / " << endl;
    cout <<setw(7)<< "   \\" << setw(10) << "       / " << endl;
    cout <<setw(8)<< "    \\"<< setw(8) << "/ " << endl;
    cout << setw(8)<<"    /" << setw(7) << "\\" << endl;
    cout << setw(7)<<"   /" << setw(9) << "  \\" << endl;
    cout << setw(6)<<"  /" << setw(11) << "    \\" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "\\"<<setw(22)<< " / " << endl;
    cout << " \\"<<setw(20)<<" / " << endl;
    cout << "  \\________________/" << endl;
    cout << " " << endl;

    //getting the amount due
    cout << "Enter the amount due: $ ";
    double amount_due;
    cin >> amount_due;

    //getting the amount received
    cout << "Enter the amount received: $ ";
    double amt_received;
    cin >> amt_received;
    cout << "The change is: " << endl;

    //creating variables for coins and their worth
    int dollars, quarters, dimes, nickels, pennies,cents, mult=100;
    double change = amt_received - amount_due;
    int dollar_value = 1;
    double quarter_value, dime_value, nickel_value, pennies_value;
    quarter_value = 0.25;
    dime_value = 0.1;
    nickel_value = 0.05;
    pennies_value = 0.02;

    //do calculation to get the change
    dollars = change / dollar_value;
    change = change - dollars * dollar_value;
    quarters = change / quarter_value;
    change = change - quarters * quarter_value;
    dimes = change / dime_value;
    change = change - dimes * dime_value;
    
    nickels = change / nickel_value;
    change = change - nickels * nickel_value;

    

    //printing the number of change for dollar and the coins
    cout << "Dollars: " << setw(10) << dollars << endl;
    cout << "Quarters: " << setw(9) << quarters << endl;
    cout << "Dimes: " << setw(12) << dimes << endl;
    cout << "Nickels: " << setw(10) << nickels << endl;
    cout << "Pennies: " << setw(10) << change *mult << endl;
    return 0;
}
