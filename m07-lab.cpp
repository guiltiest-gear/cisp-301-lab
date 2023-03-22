// Program    : m07-lab.cpp
// Author     : Jade Fox
// Due Date   : Mar 26, 2023
// Description: Design a program that lets the user  enter the total rainfall
//              for each of 12 months into an array. The program should
//              calculate and display the total rainfall for the year,
//              the average rainfall for the year, and the month with the
//              highest and lowest amount of rain.
// Begin pseudocode
/*
Declare Constant Integer length = 12
Declare Real rain[length]

Module user_input
    Declare Integer i = 0
    For i To length
        Display "Enter the rainfall (in inches) for month #", i + 1, ": "
        Input rain[i]
    End For
Module End

Function total_rain(Real rain[], Integer length)
    Declare real sum = 0
    Declare Integer i = 0
    For i To length
        Set sum = sum + rain[i]
    End For
    Return sum
End Function

Function find_max()
    Declare Real max = rain[0]
    Declare Integer i = 1
    For i To length
        If rain[i] > max Then
            Set max = rain[i]
        End If
    End For
    Return max
End Function

Function find_min()
    Declare Real min = rain[0]
    Declare Integer i = 1
    For i To length
        If rain[i] < min Then
            Set min = rain[i]
        End If
    End For
    Return max
End Function

Function array_index_max()
    Declare Real index_max = -1
    Declare Integer i = 0
    For i To length
        If rain[i] == find_max() Then
            Set index_max = i
            Break
        End if
    End For
    Return index_max
End Function

Function array_index_min()
    Declare Real index_min = -1
    Declare Integer i = 0
    For i To length
        If rain[i] == find_min() Then
            Set index_min = i
            Break
        End if
    End For
    Return index_min
End Function

Module results
    Display "The total rainfall for the year is ", Call total_rain(rain, length), " inches."
    Display "The average rainfall for the year is ", (Call total_rain(rain, length) / length), " inches."
    Display "The largest amount of rain was ", Call find_max(), " inches in month ", (Call array_index_max() + 1), "."
    Display "The smallest amount of rain was ", Call find_min(), " inches in month ", (Call array_index_min() + 1), "."
End Module

Module main()
    Call user_input()
    Call results()
End Module

*/
// End pseudocode

#include <iostream>

using namespace std;

// Use a constant for array length
const int length = 12;

// Init the array
float rain[length];

void user_input() {
    for (int i = 0; i < length; i++) {
        // This formatting could probably be done better but it works so we're keeping it
        cout << "Enter the rainfall (in inches) for month #" << i + 1 << ": ";
        cin >> rain[i];
    }
    return;
}

float total_rain(float rain[], int length) {
    // Init sum
    float sum = 0;
    for (int i = 0; i < length; i++) {
        sum += rain[i];
    }
    return sum;
}

// I know these could be done with min_elements and max_elements but I couldn't get it to work with floats
float find_max() {
    float max = rain[0];
    for (int i = 1; i < length; i++) {
        if (rain[i] > max) {
            max = rain[i];
        }
    }
    return max;
}

float find_min() {
    float min = rain[0];
    for (int i = 1; i < length; i++) {
        if (rain[i] < min) {
            min = rain[i];
        }
    }
    return min;
}

// This could probably be done a little better but it just works
int array_index_max() {
    float index_max = -1;
    for (int i = 0; i < length; i++) {
        if (rain[i] == find_max() ) {
            index_max = i;
            break;
        }
    }
    return index_max;
}

int array_index_min() {
    float index_min = -1;
    for (int i = 0; i < length; i++) {
        if (rain[i] == find_min() ) {
            index_min = i;
            break;
        }
    }
    return index_min;
}

void results() {
    cout << "The total rainfall for the year is " << total_rain(rain, length) << " inches." << '\n';
    cout << "The average rainfall for the year is " << (total_rain(rain, length) / length) << " inches." << '\n';
    cout << "The largest amount of rain was " << find_max() << " inches in month " << (array_index_max() + 1) << "." << '\n';
    cout << "The smallest amount of rain was " << find_min() << " inches in month " << (array_index_min() + 1) << "." << '\n';
    return;
}

int main() {
    user_input();
    results();
    return 0;
}
