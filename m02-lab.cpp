// Program     : m01-lab.cpp
// Author      : Jade Fox
// Due Date    : Feb 5, 2023
// Description : A modular program that asks the user
//               to input the monthly costs for the
//               following expenses incurred from
//               opperating their automobile:
//               loan payment, insurance,
//               gas, oil, tires, and maintenance.
//               Display the total monthly and annual costs
//               of these expenses

// Begin pseudocode
/*
Declare real loan
Declare real insurance
Declare real gas
Declare real oil
Declare real tires
Declare real maintenance
Declare real monthly
Declare real yearly

Module expenses()
    Print "Enter the monthly loan amount: "
    Input loan
    Print "Enter the monthly insurance amount: "
    Input insurance
    Print "Enter the monthly gas amount: "
    Input gas
    Print "Enter the monthly oil amount: "
    Input oil
    Print "Enter the monthly tires amount: "
    Input tires
    Print "Enter the monthly maintenance amount: "
    Input maintenance
End Module

Module math()
    monthly = loan + insurance + gas + oil + tires + maintenance
    yearly = monthly * 12
End Module

Module main()
    expenses()
    math()
    Print "Total monthly expense: $", monthly
    Print "Total yearly expense: $", yearly
End Module
*/
//End pseudocode

#include <iostream>

using namespace std;

// Globally initialize the variables
float loan;
float insurance;
float gas;
float oil;
float tires;
float maintenance;
float monthly;
float yearly;

// Request user input
void expenses ()
{
    cout << "Enter the monthly loan amount: ";
    cin >> loan;
    cout << "Enter the monthly insurance amount: ";
    cin >> insurance;
    cout << "Enter the monthly gas amount: ";
    cin >> gas;
    cout << "Enter the monthly oil amount: ";
    cin >> oil;
    cout << "Enter the monthly tires amount: ";
    cin >> tires;
    cout << "Enter the monthly maintenance amount: ";
    cin >> maintenance;
    return;
}

// Perform math on the variables
void math ()
{
    monthly = loan + insurance + gas + oil + tires + maintenance;
    yearly = monthly * 12;
    return;
}

// Execute the main function
int main ()
{
    expenses();
    math();
    cout << "Total monthly expense: $" << monthly << endl;
    cout << "Total yearly expense: $" << yearly << endl;
    return 0;
}
