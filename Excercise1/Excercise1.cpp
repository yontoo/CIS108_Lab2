#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Create the integer age and prompt the user to input their age, writing it to the variable
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	
	//Create the integer ten and use the expression to add 10 to the variable "age", and write it into variable "ten"
	int ten = age + 10;
	cout << "In 10 years, you will be " << ten << endl;

	//Create the integer temp and prompt the user to input the current temperature, and write it into the variable "temp"
	double temp = 0.0;
	cout << "Please enter the current temperature in Fahrenheit: ";
	cin >> temp;

	//Create the integer temp_c and use the expression to convert the inputed temperature to Celsius, then output the converted temperature.
	double temp_c = (temp - 32) * 5 / 9;
	cout << "The current temperature in Celsius is: " << temp_c;
	return 0;
}
