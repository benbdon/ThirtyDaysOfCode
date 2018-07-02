//============================================================================
// Name        : Day1DataTypes.cpp
// Author      : Ben Don
// Version     :
// Copyright   : N/A
// Description : Day1DataTypes in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s= "HackerRank ";

	// Declare second integer, double, and String variables.
	int integerNumber;
	double doubleNumber;
	string stringName;
	string ws;

	// Read and save an integer, double, and String to your variables.
    cin >> integerNumber;
    cin >> doubleNumber;
	cin.ignore();  //ignores an end of line character 
	getline(cin, stringName);
	
    // Print the sum of both integer variables on a new line.
    integerNumber = i + integerNumber;
    cout << integerNumber << endl;

    // Print the sum of the double variables on a new line.
	doubleNumber = d + doubleNumber;
    cout << fixed << setprecision(1) << doubleNumber << endl;

    // Concatenate and print the String variables on a new line
	//The 's' variable above should be printed first.
	stringName = s + stringName;
    cout << stringName << endl;

    return 0;
}