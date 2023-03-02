// Program    : m06-lab.cpp
// Author     : Jade Fox
// Due Date   : Mar 12, 2023
// Description: A program that simulates a lottery game.
//              Print five numbers randomly between 1
//              and 47 in one straight line,
//              plus one random mega number between 1
//              and 27.
// Begin pseudocode
/*
Declare integer lines

Module user_input
    Display "How many lines of SuperLottoPlus would you like? : "
    Input lines
Module end

Module validate
    If lines <= 0 Then
        Display "Incorrect value. Must be greater than 1."
        Exit
Module end

Module super_lotto_plus
    Declare integer lotto_num
    Declare integer i
    For i to 5
        Set lotto_num = rand(1, 47)
        Display lotto_num
    End For
Module End

Module print_nums
    Display "SuperLottoPlus:"
    Declare integer i
    For i to lines
        Call super_lotto_plus()
    End For
Module End

Module mega_nums
    Display "Mega number:"
    Declare integer mega_num
    Declare integer i
    For i to lines
        Set mega_num = rand(1, 27)
        Disaply mega_num
    End For
Module End

Module main
    Call user_input()
    Call validate()
    Call print_nums()
    Call mega_nums()
Module End
*/
// End pseudocode
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::srand;

// Init lines variable
int lines;

// Request user input
void user_input() {
    cout << "How many lines of SuperLottoPlus would you like? : ";
    cin >> lines;
    cout << '\n';
    return;
}

// Exit with a failure if the inputted value is less than or equal to 0
void validate() {
    if (lines <= 0) {
        cout << "Incorrect value. Must be greater than 1." << '\n';
        exit(1);
    }
    return;
}

// Generate the numbers
void super_lotto_plus() {
    int lotto_num;
    for (int i = 0; i < 5; i++) {
        // Plus 1 is included to make sure 0 doesn't occur
        lotto_num = 1 + (rand() % 47);
        cout << lotto_num << " ";
    }
    return;
}

// Print out the numbers correctly
void print_nums() {
    cout << "SuperLottoPlus:" << '\n';
    for (int i = 0; i < lines; i++) {
        super_lotto_plus();
        cout << '\n';
    }
    cout << '\n';
    return;
}

// Print the mega numbers
void mega_nums() {
    cout << "Mega number:" << '\n';
    int mega_num;
    for (int i = 0; i < lines; i++) {
        // Plus 1 is included to make sure 0 doesn't occur
        mega_num = 1 + (rand() % 27);
        cout << mega_num << '\n';
    }
    return;
}

int main() {
    // Init randomness
    srand(time(0));
    user_input();
    validate();
    print_nums();
    mega_nums();
    return 0;
}
