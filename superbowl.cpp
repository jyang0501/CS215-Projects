/*course: CS215 - 008
 *Project: Project 1
 *Purpose: Display the Super Bowl in Roman Numeral Representation by asking for user input.
 *         This program displays the Super Bowls number in numeral since 1967
 *Author: Joyce Yang
 */
#include <iostream>
#include <string>

using namespace std;


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
    string result = "";

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
    case 4: roman = HUNDRED + FIVEHUNDRED + roman;
        break;
    case 5: roman = FIVEHUNDRED + roman;
        break;
    case 6: roman = FIVEHUNDRED + HUNDRED + roman;
        break;
    case 7: roman = FIVEHUNDRED + HUNDRED + HUNDRED + roman;
        break;
    case 8: roman = FIVEHUNDRED + HUNDRED + HUNDRED + HUNDRED + roman;
        break;
    case 9: roman =  HUNDRED +THOUSAND + roman;
        break;
    default: break;
    }

    // third, handle hundredth digit
    switch (thousands_digit)
    {
    case 1: roman = THOUSAND + roman;
        break;
    case 2: roman = THOUSAND + THOUSAND + roman;
        break;
    case 3: roman = THOUSAND + THOUSAND + THOUSAND + roman;
        break;

    default: break;
    }

    return roman;
}

int main()
{
    // the first super bowl was hold in 1967 (at los angeles memorial coliseum)
    const int START_SUPERBOWL = 1967;

    // define the correct range for roman numerals: [MIN_ROMAN, MAX_ROMAN]
    const int MIN_ROMAN = 1;
    const int MAX_ROMAN = 3999;

    bool matched = false;
    //intepreting user input
    while (!matched)
    {
        
        cout << "***********************************************************" << endl;
        cout << "*     The Super Bowl is the annual final playoff game     *" << endl;
        cout << "*         of the NFL to determine the league champion.    *" << endl;
        cout << "* The first Super Bowl took place on January 15, 1967.    *" << endl;
        cout << "* Super Bowl I (Los Angeles Memorial Coliseum) --> 1967   *" << endl;
        cout << "* This Roman Numerals Convertor is written by Joyce Yang. *" << endl;
        cout << "* If you had a time machine, which year of Super Bowl     *" << endl;
        cout << "* you want to attend (1967 - 5965) ?                      *" << endl;
        cout << "***********************************************************" << endl;
        cout << "Please enter the year you want to attend ( click Q or q to quit): " << endl;
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

                cout << "Back to 2023, and have a great day!" << endl;
                return matched = true;
            }
            else
            {
                //see if the size is valid
                cout << "Please use four-digit number to represent a year(1697-5965)!" << endl;
                cout << "" << endl;
                //ask user for another input
                cout << "***********************************************************" << endl;
                cout << "*     The Super Bowl is the annual final playoff game     *" << endl;
                cout << "*         of the NFL to determine the league champion.    *" << endl;
                cout << "* The first Super Bowl took place on January 15, 1967.    *" << endl;
                cout << "* Super Bowl I (Los Angeles Memorial Coliseum) --> 1967   *" << endl;
                cout << "* This Roman Numerals Convertor is written by Joyce Yang. *" << endl;
                cout << "* If you had a time machine, which year of Super Bowl     *" << endl;
                cout << "* you want to attend (1967 - 5965) ?                      *" << endl;
                cout << "***********************************************************" << endl;
                cout << "Please enter the year you want to attend ( click Q or q to quit): " << endl;
                cout << "Type Q to quit the program: ";


                cin >> user_input;
            }

        }
        //clear everything after the number, now we want to floor the number

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int floored_num = user_input;
        if (floored_num >= 1967 && floored_num <= 5965)
        {
            cout << "The time machine will bring you to the year of " << floored_num << ": " << endl;
            floored_num = floored_num - START_SUPERBOWL + 1;
            cout << "It is Super Bowl " << roman_numeral(floored_num) << endl;
            cout << "We will help you find out the result and other interesting information...next time:)" << endl;
            cout << "";




        }
        else if ( floored_num < 1967)
        {
            cout << "The time machine will bring you to the year of "<<floored_num<<": " << endl;
            cout << "Wait!!! The year you enter is TOO EARLIER than the first Super Bowl!"<< endl;
            cout << "" << endl;

        }
        else
        {
            cout << "The time machine will bring you to the year of " << floored_num << ": " << endl;
            cout << "Hold on!!! The year you enter is TOO BIG for Roman Numberals!"<< endl;
            cout << "" << endl;

        }

    }

    return 0;

}