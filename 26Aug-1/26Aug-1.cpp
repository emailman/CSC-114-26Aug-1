// 26Aug-1.cpp : Defines the entry point for the console application.
//

/*
Demo for CSC 114
Simple prompt, calculate, output program
Eric Mailman
*/

#include "stdafx.h" // Required for Visual Studio
#include <iostream>
using namespace std;
 
int main()
{
	double speed, time, distance;

	// Clear the screen
	system("cls");

	// Prompt and read inputs
	cout << "Enter Your Average Speed (mph): ";
	cin >> speed;

	cout << "Enter Time (hours): ";
	cin >> time;

	// Calculate the distance traveled
	distance = speed * time;

	// Show the results
	cout << "You traveled " << distance << " miles" << endl;

	return 0;
}

