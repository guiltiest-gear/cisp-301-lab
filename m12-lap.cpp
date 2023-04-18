// Program    : m12-lab.cpp
// Author     : Jade Fox
// Due Date   : April 23, 2023
// Description: Design a program that asks the user to enter a 10-character
//              telephone number in the format XXX-XXX-XXXX. The program should
//              display the telephone number with any alphabetic characters
//              that appeared in the original translated to their numeric
//              equivalent. For example, if the user enters 555-GET-FOOD the
//              program should display 555-438-3663.
// Begin pseudocode
/*
Declare Constant Integer length = 12

Declare String input

Declare Character tab[length]
Declare Character mid[length]

Module user_input()
    Display "Input a phone number with letters (upper case letters only) (XXX-XXX-XXXX): "
    Input input
End Module

Module str_to_char_arr()
    Stringcopy(tab, input)
End Module

Module convert
    Declare Integer i = 0
    For i To length - 1
        Switch (tab[i])
            default:
                Disaply "Error: Input was not read correctly!"
                Exit
            case '-':
                mid[i] = '-'
                Continue
            case '1':
                mid[i] = '1'
                Continue
            case '2':
                mid[i] = '2'
                Continue
            case '3':
                mid[i] = '3'
                Continue
            case '4':
                mid[i] = '4'
                Continue
            case '5':
                mid[i] = '5'
                Continue
            case '6':
                mid[i] = '6'
                Continue
            case '7':
                mid[i] = '7'
                Continue
            case '8':
                mid[i] = '8'
                Continue
            case '9':
                mid[i] = '9'
                Continue
            case 'A':
            case 'B':
            case 'C':
                mid[i] = '2'
                Continue
            case 'D':
            case 'E':
            case 'F':
                mid[i] = '3'
                Continue
            case 'G':
            case 'H':
            case 'I':
                mid[i] = '4'
                Continue
            case 'J':
            case 'K':
            case 'L':
                mid[i] = '5'
                Continue
            case 'M':
            case 'N':
            case 'O':
                mid[i] = '6'
                Continue
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                mid[i] = '7'
                Continue
            case 'T':
            case 'U':
            case 'V':
                mid[i] = '8'
                Continue
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                mid[i] = '9'
                Continue
    End For
End Module

Function char_to_str()
    Declare String last = ""
    Declare Integer i = 0
    For i to length - 1
        Set last = last + mid[i]
    End For
    Return last
End Function

Module main()
    Call user_input()
    Call str_to_char_arr()
    Call convert()
    Disaply "Converted number: ", Call char_to_str()
End Module
*/
// End pseudocode

#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::string;
using std::strcpy;

// Define the array length in a constant
const int length = 12;

// Put the inputted number and mid into here
string input;

// Char array to hold converted input
char tab[length];
char mid[length];

// Get the phone number
void user_input() {
    cout << "Input a phone number with letters (upper case letters only) (XXX-XXX-XXXX): ";
    cin >> input;
    return;
}

// Convert the inputted string to an array
void str_to_char_arr() {
    strcpy(tab, input.c_str());
    return;
}

// Loop through the character array, convert the letters to numbers, and reassemble into an array
// I know this case statement is attrocius and messy, but I couldn't think of any other way to do it
void convert() {
    for (int i = 0; i < length; i++) {
        switch (tab[i]) {
            default:
                cout << "Error: Input was not read correctly!" << '\n';
                exit(1);
            // If there a dash, just leave it be
            case '-':
                mid[i] = '-';
                continue;
            // Do the same for the numbers
            case '1':
                mid[i] = '1';
                continue;
            case '2':
                mid[i] = '2';
                continue;
            case '3':
                mid[i] = '3';
                continue;
            case '4':
                mid[i] = '4';
                continue;
            case '5':
                mid[i] = '5';
                continue;
            case '6':
                mid[i] = '6';
                continue;
            case '7':
                mid[i] = '7';
                continue;
            case '8':
                mid[i] = '8';
                continue;
            case '9':
                mid[i] = '9';
                continue;
            // If the character is A, B, or C, convert it to a 2
            // Follow the same logic for the other letter combos
            case 'A':
            case 'B':
            case 'C':
                mid[i] = '2';
                continue;
            case 'D':
            case 'E':
            case 'F':
                mid[i] = '3';
                continue;
            case 'G':
            case 'H':
            case 'I':
                mid[i] = '4';
                continue;
            case 'J':
            case 'K':
            case 'L':
                mid[i] = '5';
                continue;
            case 'M':
            case 'N':
            case 'O':
                mid[i] = '6';
                continue;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                mid[i] = '7';
                continue;
            case 'T':
            case 'U':
            case 'V':
                mid[i] = '8';
                continue;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                mid[i] = '9';
                continue;
        }
    }
    return;
}

// Now convert the char array back to a string
string char_to_str() {
    // Set the final mid (the one displayed to the user) as an empty string
    string last = "";
    for (int i = 0; i < length; i++) {
        last = last + mid[i];
    }
    return last;
}

// Main function
int main() {
    user_input();
    str_to_char_arr();
    convert();
    cout << "Converted number: " << char_to_str() << '\n';
    return 0;
}
