// Program    : m10-lab.cpp
// Author     : Jade Fox
// Due Date   : April 9, 2023
// Description: Create a file and inupt up to 30 integers into the file.
//              Save the file as Numbers.dat. Design a program that calculates
//              the average of all the numbers stored in the file.
// Begin pseudocode

/*
*/
// End pseudocode

#include <iostream>
#include <fstream>

using std::cout;
using std::ifstream;

// Init a running total
int total = 0;

// Read from the file and store the output in
void read_and_write() {
    int nums = 0;
    ifstream nums_from_file("Numbers.dat");
    while (nums_from_file >> nums) {
        total += nums;
    }
    // Make sure to close the file after you finish
    nums_from_file.close();
    return;
}

// Average the input from the file
double average_nums() {
    // I know this is the lazy way but I couldn't figure out how to do it with arrays
    double average = total / 30.0;
    return average;
}

// Main function
int main() {
    read_and_write();
    cout << average_nums() << '\n';
    return 0;
}
