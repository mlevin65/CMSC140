/*
 * Class: CMSC140 CRN
 * Instructor: Prof. Laratta
 * Project 2
 * Description: Converter tool menu
 * Due Date:10/10/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Miles Levine
 * Pseudocode or Algorithm for the program:
1. Declare variables, menuNumber, countryName, temperature, fahrenheitTemp, distance, distanceMiles, weight, weightPounds.
2. cout asking for country’s name, getline collecting data.
3. cout menu options.
4. cin enter choice of menu option.
5. if statements saying that if the user inputs 1, then they will be prompted with the temp converter.
6. if statements saying that if the user inputs 2, then they will be prompted with the distance converter.
7. if statements saying that if the user inputs 3, then they will be prompted with the weight converter.
8. if statements saying that if the user inputs 4, then the program will end.
6. else statement saying that if the user inputs anything other than the numbers 1-4 then an error will display.
7. cout statement saying that the country sounds fun.
8. closing cout statements using the const variable.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int menuNumber; //stores menue number
	string countryName; //stores country name
	double temperature; //stores temperature in celsius
	double fahrenheitTemp; //stores temperature in fahrenheit
	double distance; //stores distance in kilometer
	double distanceMiles; //stores distance in miles
	double weight; //stores weight in kilograms
	double weightPounds; //stores weight in pounds
	
	const string PROGRAMMER_NAME = "Miles Levine";
	const int PROJECT_NUMBER = 2;
	const string DUE_DATE = "10/10/2021";

	cout << "Enter a country name: ";
	getline(cin, countryName); //collects the country name from user

	//displays the menue options
	cout << endl << endl << "Converter Toolkit" << endl;
	cout << "-----------------" << endl;
	cout << "1. Temperature Converter" << endl << "2. Distance Converter" << endl << "3. Weight Converter" << endl << "4. Quit" << endl << endl;

	cout << "Enter your choice (1-4); "<< endl;
	cin >> menuNumber; //stores the number corresponding with the menu option

	if (menuNumber >= 1 && menuNumber <= 4) { //setting the range of number options to 1-4
		if (menuNumber == 1) { //Temperature Converter
			cout << "Please enter temperature in Celsius (such as 24): ";
			cin >> temperature;
			fahrenheitTemp = (temperature * 1.8) + 32;
			cout << endl << "It is " << fahrenheitTemp << " in fahrenheit." << endl << endl;
		}
		else if (menuNumber == 2) { //Distance Converter
			cout << "Please enter distance in Kilometer (such as 18.54): ";
			cin >> distance;
			if (distance <= 0) { //if distance is negitive, then error message will display
				cout << "Program does not convert negitive distance !!!";
			}
			else
				distanceMiles = (distance / 1.609);
			cout << endl << "It is " << distanceMiles << " in miles." << endl << endl;

		}
		else if (menuNumber == 3) { //Weight Converter
			cout << "Please enter weight in kilogram (such as 21): ";
			cin >> weight;
			if (weight <= 0) { //if weight is negitive, then error message will display
				cout << "Program does not convert negitive weight !!!";
			}
			else
				weightPounds = (weight * 2.205);
			cout << endl << "It is " << weightPounds << " in Pounds." << endl << endl;
		}
		else if (menuNumber == 4) { //Quit
			return 0;
		}



	}
	else //Error message if the user enters an invalid menu number
		cout << "Invalid menue number." << endl << endl; 


	cout << countryName << " sounds fun!" << endl << endl;



	//ending
	cout << "Thank you for testing my program!!" << endl;
	cout << "Programer: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;


}

