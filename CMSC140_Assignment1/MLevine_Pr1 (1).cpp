/*
* Class: CMSC140 CRN 20112
* Instructor: Prof Larata
* Project<1>
* Description: The Department plans to purchase a humanoid robot. The Chairman would like you to write a program to show a greeting script the robot can use later.
Your first task is to use the following script to prototype the robot for presentation
* Due Date: 9/26/21
* I pledge that I have completed the programming assignment
independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Miles Levine
* Pseudocode or Algorithm for the program:
1. Declaring variables: robotName, visitorName, age, wholeNumber1, wholeNumber2, PROGRAMMER_NAME, PROJECT_NUMBER, DUE_DATE, months, days,
hours, minutes, seconds, dogYears, fishYears, result1, result2, ONE_DOG_YEAR, and DAYS_PER_MONTH to their appropriate data types.
2. Opening cout statements with 2 cin statements to collect the user's name and a single integer.
3. Using aritimetic/multiplication from the first single integer to get the values for variables: months, days, hours, minutes, seconds, dogYears, and fishYears.
4. Displays the values of months, days, hours, minutes, seconds, dogYears, and fishYears through cout statements.
5. Collects 2 whole numbers from the user which are stored into wholeNumber1 and wholeNumber2.
6. Arithmetic where wholeNumber1 and wholeNumber2 are added and stored into result1.
7. Arithmetic where wholeNumber1 and wholeNumber2 are divided and stored into result 2.
8. Declaring variable result3 as a double that equals the value of wholeNumber1 divided by wholeNumber2.
9. Displaying the results of the arithmetic through result1, result2.
10. Setting the precision of the values of wholeNumber1, wholeNumber2, and result3 to 1 decimal place.
11. Displaying result3.
12. Ending cout statements which display PROGRAMMER_NAME, PROJECT_NUMBER, and DUE_DATE.

*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	string robotName = "Nao"; //declaring the robot's name
	string visitorName; //variable for the visitor's name
	int age; //variable for the age of the noun
	double wholeNumber1; //variable for whole number 1
	double wholeNumber2; //variable for whole number 2
	const string PROGRAMMER_NAME = "Miles Levine";
	const int PROJECT_NUMBER = 1;
	const string DUE_DATE = "9/26/2021";
	int months;
	int days;
	int hours;
	int minutes;
	int seconds;
	int dogYears;
	int fishYears;
	int result1;
	int result2;
	const int ONE_DOG_YEAR = 7;
	const int DAYS_PER_MONTH = 30;

	//introduction

	cout << "* ***************Robot Prototype Scripting * *******************" << endl << endl;
	cout << "Hello, welcome to Montgomery College! My name is " << robotName << ". May I have your name?" << endl;
	getline(cin, visitorName); //stores the user's input name
	cout << "Nice to have you with us today, " << visitorName << "!" << endl; //dispays the user's name
	cout << "Let me impress you with a small game." << endl;
	cout << "Give me the age of an important person or a pet to you." << endl;
	cout << "Please give me only a number: " << endl;
	cin >> age; //stores the users input
	cout << endl << endl << "You have entered " << age << "." << endl; //displays what number the user input
	cout << "If this is for a person, the age can be expressed as:" << endl;

	//arithmetic
	months = age * 12;
	days = months * 30;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;
	dogYears = age * 7;
	fishYears = age * 5;


	//displaying arithmetic
	cout << age << " years" << endl;
	cout << "or " << months << " months" << endl;
	cout << "or about " << days << " days" << endl;
	cout << "or about " << hours << " hours" << endl;
	cout << "or about " << minutes << " minutes" << endl;
	cout << "or about " << seconds << " seconds" << endl;
	cout << "If this is for a dog, it is " << dogYears << " years old in human age." << endl;
	cout << "If this is for a gold fish, it is " << fishYears << " years old in human age." << endl << endl;

	//collecting input data
	cout << "Let's play another game, " << visitorName << ". Give me a whole number." << endl;
	cin >> wholeNumber1; //stores the user's first input whole number
	cout << "Very well. Give me another whole number." << endl;
	cin >> wholeNumber2; //stores the user's second input whole number

	//arithmetic
	result1 = wholeNumber1 + wholeNumber2;
	result2 = wholeNumber1 / wholeNumber2;
	double result3 = wholeNumber1 / wholeNumber2; //declaring variable as a double to show the precision of the result.

	//displaying arithmetic
	cout << "Using the operator '+' in C++, the result of " << wholeNumber1 << " + " << wholeNumber2 << " is " << result1 << endl;
	cout << "Using the operator '/' in C++, the result of " << wholeNumber1 << " / " << wholeNumber2 << " is " << result2 << endl;
	cout << fixed << showpoint << setprecision(1); //setting the precision of wholeNumber, wholeNumber2, and result3 variables to 1 decimal place.
	cout << "however, the result of " << wholeNumber1 << " / " << wholeNumber2 << " is about " << result3 << endl << endl;

	//ending
	cout << "Thank you for testing my program!!" << endl;
	cout << "Programer: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;

	return 0;




}