// Program    : m11-lab.cpp
// Author     : Jade Fox
// Due Date   : April 16, 2023
// Description: Write a program that displays the following menu:
//              Geometry calculator
//              1. Calculate the Area of a Circle
//              2. Calculate the Area of a Rectangle
//              3. Calculate the Area of a Triangle
//              4. Quit
//
//              Enter your choice (1-4)
// Begin pseudocode
/*
Declare Integer choice
Declare Constant Real pi = 3.1415926535898

Function area_circle(Real radius)
    Declare Real area = pi * radius * radius
    Return area
End Function

Function area_triangle(Real base, Real height)
    Declare Real area = base * height * 0.5
    Return area
End Function

Function area_rectangle(Real length, Real width)
    Declare Real area = length * width
    Return area
End Function

Module answer_circle
    Declare Real radius
    Display "Input the radius of the circle: "
    Input radius
    Display "The area of the circle is ", Call area_circle(input)
End Module

Module answer_triangle
    Declare Real base, height
    Display "Input the base length of the triangle: "
    Input base
    Display "Input the height of the triangle: "
    Input height
    Display "The area of the triangle is ", Call area_triangle(base, height)
End Module

Module answer_rectangle
    Declare Real length, width
    Display "Input the length of the rectangle: "
    Input base
    Display "Input the width of the rectangle: "
    Input height
    Display "The area of the triangle is ", Call area_rectangle(length, width)
End Module

Module user_input
    Display "Geometry calculator"
    Display "1. Calculate the Area of a Circle"
    Display "2. Calculate the Area of a Rectangle"
    Display "3. Calculate the Area of a Triangle"
    Display "4. Quit"
    Display "Enter your choice (1-4): "
    Input choice
End Module

Module switch_choice
    Switch (choice)
        Default:
            Display "That is not a valid option."
            Exit
            Break
        Case 1:
            Call answer_circle()
            Break
        Case 2:
            Call answer_rectangle()
            Break
        Case 3:
            Call answer_triangle()
            Break
        Case 4:
            Exit
            Break
End Module

Module main
    Call user_input()
    Call switch_choice()
End Module
*/
// End pseudocode

#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::pow;

// Note: Do not use char, breaks the program
int choice;

// Define the constant of pi
const double pi = 3.1415926535898;

// Use doubles to make sure precision is maintained
double area_circle(double radius) {
    double area = pi * pow(radius, 2);
    return area;
}

double area_triangle(double base, double height) {
    double area = base * height * 0.5;
    return area;
}

double area_rectangle(double length, double width) {
    double area = length * width;
    return area;
}

// Methods for attaining answers
void answer_circle() {
    double radius;
    cout << "Input the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is " << area_circle(radius) << '\n';
    return;
}

void answer_triangle() {
    double base, height;
    cout << "Input the base length of the triangle: ";
    cin >> base;
    cout << "Input the height of the triangle: ";
    cin >> height;
    cout << "The area of the triangle is " << area_triangle(base, height) << '\n';
    return;
}

void answer_rectangle() {
    double length, width;
    cout << "Input the length of the rectangle: ";
    cin >> length;
    cout << "Input the width of the rectangle: ";
    cin >> width;
    cout << "The area of the rectangle is " << area_rectangle(length, width) << '\n';
    return;
}

void user_input() {
    cout << "Geometry calculator" << '\n';
    cout << "1. Calculate the Area of a Circle" << '\n';
    cout << "2. Calculate the Area of a Rectangle" << '\n';
    cout << "3. Calculate the Area of a Triangle" << '\n';
    cout << "4. Quit" << '\n';
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    return;
}

// Switch statement
void switch_choice() {
    switch (choice) {
        default:
            cout << "That is not a valid option." << '\n';
            exit(1);
            break;
        case 1:
            answer_circle();
            break;
        case 2:
            answer_rectangle();
            break;
        case 3:
            answer_triangle();
            break;
        case 4:
            break;
    }
    return;
}

int main() {
    user_input();
    switch_choice();
    return 0;
}
