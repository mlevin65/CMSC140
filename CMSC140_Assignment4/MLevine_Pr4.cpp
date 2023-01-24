/*
* Class: CMSC140 CRN 202220
* Instructor: Prof. Laratta
* Project 4
* Due Date: 11/14/21
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Miles Levine
Pseudocode
1.	Prototype functions: numOfEmployees, displayInfo.
2.	Function NumOfEmployees:
    a.	Cout asking for the number of employees in the company followed by outFile to get the data and display it in the file. Do not accept number less than 1
    b.	Reads an item of input, while the input is invalid, display an error message, read the input again, end while input validation.
3.	Global variable that writes to a file called ofstream textOutput;
4.	Define variables needed in the program.
5.	Create the file “employeeAbsences” using outFile.open("employeeAbsences.txt");
6.	Call out function: NumOfEmployees
7.  For loop to process the amout of employees.
    a. Cout asking for employee id followed by fileOutput to get the data and display it in the file.
	b. Cout asking for the number of days the employee missed followed by fileOutput to get the data and display it in the file. Can’t be a negative int.
    c. Reads an item of input, while the input is invalid, display an error message, read the input again, end while input validation.
8.  Arithmetic that takes the number of employees in the company and the total number of days absent for all employees during the year
and calculates the average number of days absent based off of the 2 variables.
9.  Ending statements which display PROGRAMMER_NAME, PROJECT_NUMBER, and DUE_DATE the file and the consloe.


*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//Prototype functions
int numOfEmployees();
void displayInfo();

ofstream textOutput; //global variable 

int main()
{
    double totalDaysMissed = 0, employeeId, daysMissed;
    double avrageDaysMissed = 0;
    double employees = numOfEmployees();
    textOutput.open("employeeAbsences.txt");
    textOutput << "EMPLOYEE ABSENCE REPORT\n" << "employee id\tdays absent\n";
    for (int count = 0; count < employees; count++) {
        cout << "Please enter an employee ID: " << endl;
        cin >> employeeId;
        textOutput << employeeId <<"\t\t\t";
        cout << "Please enter the number of days this employee was absent: " << endl;
        cin >> daysMissed;
        while (daysMissed < 0) {
            cout << "Error!! Days absent cannot be less than zero, please try again. \n";
            cin >> daysMissed;
        }
        textOutput << daysMissed << endl;
        totalDaysMissed += daysMissed;
        avrageDaysMissed = (totalDaysMissed / employees);
        }
    textOutput << "The " << employees << " employees were absent a total of " << totalDaysMissed << " days." << endl;
    textOutput << "The average number of days absent is " << avrageDaysMissed << " days." << endl;

    displayInfo();

}

int numOfEmployees()
{
    int num;
    cout << "*** This program calculates the average number of days a company's employees are absent. ***" << endl << endl;
    cout << "Please enter the number of employees in the company: " << endl;
    cin >> num;
    while (num <= 0) {
        cout << "Error. Number of employees cannot be less than 1!!" << endl << endl;
        cin >> num;
    }
    return num;
}





void displayInfo()
{
    const string PROGRAMMER_NAME = "Miles Levine";
    const int PROJECT_NUMBER = 4;
    const string DUE_DATE = "11/14/2021";

    cout << "\n\nThank you for testing my program!!" << endl;
    cout << "Programer: " << PROGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;
   
    textOutput << "\n\nThank you for testing my program!!" << endl;
    textOutput << "Programer: " << PROGRAMMER_NAME << endl;
    textOutput << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
    textOutput << "Due Date: " << DUE_DATE << endl;
}
