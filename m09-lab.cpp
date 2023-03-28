// Program    : m09-lab.cpp
// Author     : Jade Fox
// Due Date   : April 2, 2023
// Description: Create an array of at least 20 integers and call a module that
//              performs a sequential search and keeps a cound of the number
//              of comparisons made until the match is found. Then call another
//              module that runs a binary search to locate the same value and
//              also keeps track of the number of comparisons.
// Begin pseudocode
/*
Declare Integer selection
Declare Constant Integer length = 20
Declare Integer linear_count = 0
Declare Integer binary_count = 0
Declare Integer nums[20] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190}

Module user_input
    Display "Enter the value being searched: "
    Input selection
Module end

Function linear_search(Integer nums[], Integer selection)
    Declare Integer i
    For i To length - 1
        If nums[i] == selection Then
            Return i
        End If
    End For
    Return -1
End Function

Function binary_search(Integer arr[], Integer l, Integer r, Integer x)
    While l <= r
        Declare Integer mid = l + (r - l) / 2
        If arr[mid] == x Then
            Return mid
        Else If arr[mid] < x Then
            Set binary_count = binary_count + 1
            Set l = mid + 1
        Else
            Set bindary_count = binary_count + 1
            Set r = mid - 1
        End If
    End While
    Return -1
End Function

Module print_results
    Display selection, " was found."
    Display "The sequential search made ", linear_count, " comparisons."
    Display "The binary search made ", binary_count, " comparisons."
End Module

Module main
    Call user_input()
    Call linear_search(nums, selection)
    Call binary_search(nums, 0, length - 1, selection)
    Call print_results()
End Module
*/
// End pseudocode

#include <iostream>

using std::cin;
using std::cout;

// Store the selected value in here
int selection;
// Put the length of the array in a constant for later use
const int length = 20;
// Running total for linear search and binary search
int linear_count, binary_count = 0;
// 20 numbers, already sorted
int nums[length] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190};

// Get user input
void user_input() {
    cout << "Enter the value being searched: ";
    cin >> selection;
    return;
}

// Linear search algorithm, nothing to see
int linear_search(int arr[], int x) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            return i;
        }
        // Counts up every time a comparison is made
        linear_count++;
    }
    return -1;
}

// Binary search algorithm, nothing to see
int binary_search(int arr[], int l, int r, int x) {
// Keep going until the left and right bounds are equal
    while (l <= r) {
        // Establish the bisect
        int mid = l + (r - l) / 2;
        // If the search value is in the middle already, stop and return.
        // If not, increment the comparison counter and bisect to the left.
        // Otherwise, increment the comparison counter and bisect to the right.
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            binary_count++;
            // For some reason doing mid++ and mid-- causes the program to freeze.
            // I don't know why it does that, so I'm opting for this approach instead.
            l = mid + 1;
        } else {
            binary_count++;
            r = mid - 1;
        }
    }
    return -1;
}

// Print the results
void print_results() {
    // Error checking was going to be here, but for some reason it broke binary_count and linear_count.
    // I genuinely don't understand why it did that.
    cout << selection << " was found." << '\n';
    cout << "The sequential search made " << linear_count << " comparisons." << '\n';
    cout << "The binary search made " << binary_count << " comparisons." << '\n';
    return;
}

int main () {
    user_input();
    linear_search(nums, selection);
    binary_search(nums, 0, length - 1, selection);
    print_results();
    return 0;
}
