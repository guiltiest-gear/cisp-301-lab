// Program    : m01-lab.cpp
// Author     : Jade Fox
// Due Date   : Feb 12, 2023
// Description: A program that asks the user for a year,
//              and then displays a message indicating if
//              the year is a leap year or not.
// Begin pseudocode
/*
Declare Integer year

Module input_year()
    Display "Enter a year: "
    Input year
Module end

Module leap_test()
    If year mod 100 = 0 AND year mod 400 = 0 Then
        Display "That is a leap year."
    else if year mod 100 != 0 AND year mod 4 = 0 Then
        Display "That is a leap year."
    else
        Display "That is not a leap year."
Module end

Module main()
    input_year()
    leap_test()
*/


#include <iostream>

using namespace std;

// Init year variable
int year;

// Get user input for the year and place it in the year variable
void input_year() {
    cout << "Enter a year: ";
    cin >> year;
    return;
}

/*
  Perform math on the year variable
  If the year variable is evenly divisible by 100 and 400,
  output a success.
  If the year is not evenly divisible by 100, but is by 4,
  output a success, otherwise, output a failure
*/
void leap_test() {
    if ( year % 100 == 0 and year % 400 == 0 ) {
        cout << "That is a leap year." << endl;
    } else if ( year % 100 != 0 and year % 4 == 0 ) {
        cout << "That is a leap year." << endl;
    } else {
        cout << "That is not a leap year." << endl;
    }
    return;
}

// Main function just runs the previous functions, nothing to see here
int main () {
    input_year();
    leap_test();
    return 0;
}
