// Program    : m04-lab.cpp
// Author     : Jade Fox
// Due Date   : Feb 19, 2023
// Description: Use nested loops to display a multiplication
//              table for the numbers 1 through a number entered
//              by the user.
// Begin pseudocode
/*
Declare integer top
Declare integer x
Declare integer y

Module user_input
    Display "Enter a value for the multiplication: "
    Input top
End Module

Module multiply
    For x To top
        Display y, "*", x, "=", y * x
    End For
Module End

Module iterate
    For y To top
        multiply()
    End For
End Module

Module main
    user_input()
    iterate()
*/
// End pseudocode

#include <iostream>

// Just use std::cin and std::cout instead of namespace std
using std::cin;
using std::cout;

// Init variables
int top, x, y;

// Get user input for top
void user_input() {
    cout << "Enter a value for the multiplication: ";
    cin >> top;
    return;
}

// Perform math
void multiply() {
    for (x = 0; x <= top; x++) {
        cout << y << " * " << x << " = " << y*x << '\n';
    }
    return;
}

// Iterate over all of the numbers
void iterate() {
    for (y = 1; y <= top; y++) {
        multiply();
    }
    return;
}

// main just runs the other functions, nothing to see
int main() {
    user_input();
    iterate();
    return 0;
}
