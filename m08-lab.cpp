// Program    : m08-lab.cpp
// Author     : Jade Fox
// Due Date   : Mar 26, 2023
// Description: Design a program that allows the user to enter 20 first names into a
//              string array. Sort the array in ascending alphabetical order and display the contents.
// Begin pseudocode
/*
Declare Constant Integer length 20

Declare String names[length], temp

Module user_input
    Declare Integer i = 0
    For i To length - 1
        Display "Enter name number ", i + 1, ": "
        Input names[i]
    End For
End Module

Module sort
    Declare Integer i = 0
    Declare Integer j = i + 1
    For i To length - 1
        For j To length - 1
            If names[i] > names[j] Then
                Set temp = names[i]
                Set names[i] = names[j]
                Set names[j] = temp
            End If
        End For
    End For
End Module

Module print
    Declare Integer i = 0
    Display "Sorted names:"
    For i to length - 1
        Display names[i]
    End For
End Module

Module main
    Call user_input()
    Call sort()
    Call print()
End Module
*/
// End pseudocode

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

const int length = 20;

// Init a string array of length 20 and a temp variable for sorting
string names[length], temp;

void user_input() {
    for (int i = 0; i < length; i++) {
        cout << "Enter name number " << i + 1 << ": ";
        cin >> names[i];
    }
    return;
}

// Basic sort, nothing to see here
void sort() {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (names[i] > names[j]) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

// Print the results
void print() {
    cout << "Sorted names:" << '\n';
    for (int i = 0; i < length; i++) {
        cout << names[i] << '\n';
    }
}

int main() {
    user_input();
    sort();
    print();
}
