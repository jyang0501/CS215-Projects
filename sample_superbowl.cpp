/*course: CS215 - 008
 *Project: Lab 5 (As part of Project 1)
 *Purpose: Display the Super Bowl in Roman Numeral Representation
 *         The first Super Bowl was hold in 1967 (at Los Angeles Memorial Coliseum)
 *         This program displays the Super Bowls in a centenary, from year 2000 to year 2099.
 *Author: Joyce Yang
 */
#include <iostream>
#include <string>

using namespace std;







//Returns a string form of a Roman Numeral.
//(n must be between 1 and 3999)
string roman_numeral(int n);


int main()
{
    const int START_SUPERBOWL = 1967;      // The first Super Bowl was hold in 1967 (at Los Angeles Memorial Coliseum) 
    const int START = 2000;     // This program displays Super Bowl starting in year 2000
    const int END = 2099;        // This program displays Super Bowl ending in year 2099
    // define the correct range for Roman Numerals: [MIN_ROMAN, MAX_ROMAN]
    const int MIN_ROMAN = 1;
    const int MAX_ROMAN = 3999;
    // The last Super Bowl which can be represented by Roman Numerals would be: START_SUPERBOWL + MAX_ROMAN - 1;
    const int GROUP = 10;                  // Layout the years in a group of 10

    // display the first 100 years of Super Bowl, starting at 1967
    cout << endl << "\t\t\tSuper Bowl Records" << endl;
    cout << "The first Super Bowl was hold at Los Angeles Memorial Coliseum on January 15, " << START_SUPERBOWL << endl;
    cout << "\tYear\t\tSuper Bowl" << endl;

    for (int i = START; i <= END; i++)
    {
        int year = i - START_SUPERBOWL + 1;
        if (i % GROUP == 0)
            cout << endl << "************************************" << endl << endl;
        cout << "\t" << i << "\t--->\t" << roman_numeral(year) << endl;
    }

    return 0;
}



/*
   Returns a string form of a Roman numeral.
   n must be between 1 and 3999
   @param n the number to convert into Roman Numeral
   @return string representing the corresponding Roman Numeral for n
*/
string roman_numeral(int n)
{
    // finding the digit in the ones place
    int ones_digit = n % 10;
    n = n / 10;
    // finding the digit in the tens place
    int tens_digit = n % 10;
    n = n / 10;
    // finding the digit in the hundreds place
    int hundreds_digit = n % 10;
    n = n / 10;
    // finding the digit in the thousands place
    int thousands_digit = n % 10;

    //initialize result string
    string reslut = "";

    //intialize the the number to roman
    const string ONE = "I";
    const string FIVE = "V";
    const string TEN = "X";
    const string FIFTY = "L";
    const string HUNDRED = "C";
    const string FIVEHUNDRED = "D";
    const string THOUSAND = "M";

    string roman;   // to store the roman numeral

    // First, handel unit digit
    // Option 1: using switch statement
    switch (ones_digit)
    {
    case 1: roman = ONE;
        break;
    case 2: roman = ONE + ONE;
        break;
    case 3: roman = ONE + ONE + ONE;
        break;
    case 4: roman = ONE + FIVE;
        break;
    case 5: roman = FIVE;
        break;
    case 6: roman = FIVE + ONE;
        break;
    case 7: roman = FIVE + ONE + ONE;
        break;
    case 8: roman = FIVE + ONE + ONE + ONE;
        break;
    case 9: roman = ONE + TEN;
        break;
    default: break;
    }

    // Second, handle Tenth digit
    switch (tens_digit)
    {
    case 1: roman = TEN + roman;
        break;
    case 2: roman = TEN + TEN + roman;
        break;
    case 3: roman = TEN + TEN + TEN + roman;
        break;
    case 4: roman = TEN + FIFTY + roman;
        break;
    case 5: roman = FIFTY + roman;
        break;
    case 6: roman = FIFTY + TEN + roman;
        break;
    case 7: roman = FIFTY + TEN + TEN + roman;
        break;
    case 8: roman = FIFTY + TEN + TEN + TEN + roman;
        break;
    case 9: roman = TEN + HUNDRED + roman;
        break;
    default: break;
    }

    // third, handle hundredth digit
    switch (hundreds_digit)
    {
    case 1: roman = HUNDRED + roman;
        break;
    case 2: roman = HUNDRED + HUNDRED + roman;
        break;
    case 3: roman = HUNDRED + HUNDRED + HUNDRED + roman;
        break;
    case 4: roman = HUNDRED + HUNDRED+ HUNDRED + HUNDRED + roman;
        break;
    case 5: roman = FIVEHUNDRED + roman;
        break;
    case 6: roman = FIVEHUNDRED + HUNDRED + roman;
        break;
    case 7: roman = FIVEHUNDRED + HUNDRED + HUNDRED + roman;
        break;
    case 8: roman = FIVEHUNDRED + HUNDRED + HUNDRED + HUNDRED + roman;
        break;
    case 9: roman = FIVEHUNDRED  + HUNDRED +HUNDRED + HUNDRED + HUNDRED + roman;
        break;
    default: break;
    }
 
    return roman;
}