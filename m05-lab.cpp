// Program    : m05-lab.cpp
// Author     : Jade Fox
// Due Date   : Feb 26, 2023
// Description: Generate 10 random numbers and
//              keep a count of how many numbers
//              are even or odd
// Begin pseudocode
/*
Declare integer x

Module Rng
    Set x = Random mod 100
Module End

Module num_test
    If x mod 2 = 0 Then
        Display "Random Number is Even: ", x
    else
        Display "Random Number is Odd: ", x
Module end

Module main
    Declare integer i = 0
    For i to 10
        Call rng
        Call num_test
    End For
Module end
*/
// End pseudocode

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

// Init variable
int x;

// Rng function
void rng() {
    // Modulo operator to keep the random numbers a manageable size
    x = rand() % 100;
    return;
}

// Simple even odd test
void num_test() {
    if ( x % 2 == 0 ) {
        cout << "Random Number is Even: " << x << '\n';
    } else {
        cout << "Random Number is Odd: " << x << '\n';
    }
    return;
}

int main() {
    // Only run srand ONCE AND ONLY ONCE
    srand(time(0));
    for ( int i = 0; i < 10; i++ ) {
        rng();
        num_test();
    }
    return 0;
}
