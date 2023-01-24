/*
 * Class: CMSC140
 * Instructor: Prof. Laratta
 * Project 5
 * Description: Create a Lo Shu magic square
 * Due Date: 12/12/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Miles Levine

 * Pseudocode or Algorithm for the program:
1.	Declare global const variables: ROWS = 3, COLS = 3, MIN = 1, MAX = 9; 
2.	Function prototypes: bool isMagicSquare, bool checkRange, bool checkUnique, bool checkRowSum, bool checkColSum, bool checkDiagSum, void fillArray, void showArray.
3.	Inside int main.
4.	Declare arrays, int magicArrayRow1[COLS], int magicArrayRow2[COLS], int magicArrayRow3[COLS]
5.	Do while loop (do)
6.	Call out function void fillArray
7.	Call out function void showArray
8.	Call out function bool checkRange
9.	Call out function bool checkUnique
10.	Call out function bool checkRowSum
11.	Call out function bool checkColSum
12.	Call out function bool checkDiagSum
13.	Call out function bool isMagicSquare
14.	If isMagicSquare == true, then cout “this is a Lo Shu magic square”.
15.	Else cout “this is not a Lo Shu magic square”
16.	Do while loop (while)
17.	Function fillArray definition:
18.	Cout asking for 3 ints for the first row with a cin statement to get the ints and stores them into magicArrayRow1
19.	Cout asking for 3 ints for the second row with a cin statement to get the ints and stores them into magicArrayRow2
20.	Cout asking for 3 ints for the third row with a cin statement to get the ints and stores them into magicArrayRow3
21.	Function showArray definition:
22.	Use for loops to display the data in each of the arrays
23.	Function checkRange definition:
24.	if arrayRow1, arrayRow2, arrayRow3 are in between the const variables MAX and MIN then will return true
25.	else return false
26.	Function checkUnique definition:
27.	If only one occurrence of numbers between 1-9 are entered, return true
28.	Else return false
29.	Function checkRowSum definition:
30.	If the numbers in arrayRow1 are equal to 15 then return true
31.	Else return false
32.	Function checkColSum definition:
33.	If the numbers in arrayRow2 are equal to 15 then return true
34.	Else return false
35.	Function checkDiagSum definition:
36.	If the numbers in arrayRow3 are equal to 15 then return true
37.	Else return false
38.	Function isMagicSquare definition:
39.	If all other functions return true, then return true
40.	Else return false
*/

#include <iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number
const int SUM = 15; // The value that must be equaled

// Function prototypes
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);


int main()
{
	const string PROGRAMMER_NAME = "Miles Levine";
	const int PROJECT_NUMBER = 5;
	const string DUE_DATE = "12/12/2021";

	char tryAgain;
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	do { // Try again loop
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, ROWS);
		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, ROWS);
		checkRange(magicArrayRow1, magicArrayRow2, magicArrayRow3, ROWS, MIN, MAX);
		checkUnique(magicArrayRow1, magicArrayRow2, magicArrayRow3, ROWS);
		checkRowSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, SUM);
		checkColSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, SUM);
		checkDiagSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, SUM);
		isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, SUM);

		if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, SUM) == 1) { // If isMagicSquare is true
			cout << "\nThis is a Lo Shu magic square.\n";
		}
		else { // If not true
			cout << "\nThis is not a Lo Shu magic square.\n";
		}

		cout << "\n\nDo you want to try again? (y/n)";
		cin >> tryAgain;
	} while ((tryAgain == 'y') || (tryAgain == 'Y')); //Try again loop

	// ending
	cout << "\n\nThank you for testing my program!!" << endl;
	cout << "Programer: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;

	return 0;
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) //function that collects data for the arrays
{
	for (int index = 0; index < size; index++) {
		cout << "Enter the number for row 0 and column " << index << ": ";
		cin >> arrayRow1[index];
	}
	for (int index = 0; index < size; index++) {
		cout << "Enter the number for row 1 and column " << index << ": ";
		cin >> arrayRow2[index];
	}
	for (int index = 0; index < size; index++) {
		cout << "Enter the number for row 2 and column " << index << ": ";
		cin >> arrayRow3[index];
	}
}

void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) //function that shows the arrays
{
	for (int index = 0; index < size; index++) {
		cout << arrayRow1[index] << " ";
	}
	cout << endl;
	for (int index = 0; index < size; index++) {
		cout << arrayRow2[index] << " ";
	}
	cout << endl;
	for (int index = 0; index < size; index++) {
		cout << arrayRow3[index] << " ";
	}

}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max) //function that checks the array's range
{
	bool status = true;
	for (int i = 0; i < size; i++) {
		if (arrayRow1[i] < min || arrayRow1[i] > max) {
			status = false;
			return status;
		}
		if (arrayRow2[i] < min || arrayRow2[i] > max) {
			status = false;
			return status;
		}
		if (arrayRow3[i] < min || arrayRow3[i] > max) {
			status = false;
			return status;
		}
		else
			return status;

	}

}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	bool status = true;
	int checkNum = MIN;
	int count = 0;

	while (checkNum <= MAX && status == true) {
		for (int index = 0; index < size; index++) {
			if (arrayRow1[index] == checkNum)
				count++;
			if (arrayRow2[index] == checkNum)
				count++;
			if (arrayRow3[index] == checkNum)
				count++;
			if (count > 1)
				status = false;
		}
		checkNum++;
		count = 0;

	}
	return status;
}

bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) //function that checks the rows sum of the arrays
{
	bool status = true;
	if (arrayRow1[0] + arrayRow1[1] + arrayRow1[2] == size) {
		if (arrayRow2[0] + arrayRow2[1] + arrayRow2[2] == size) {
			if (arrayRow3[0] + arrayRow3[1] + arrayRow3[2] == size) {
				return status;
			}
		}
	}
	else {
		status = false;
		return status;
	}
}

bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) //function that checks the colums sum of the arrays
{
	bool status = true;
	if (arrayRow1[0] + arrayRow2[0] + arrayRow3[0] == size) {
		if (arrayRow1[1] + arrayRow2[1] + arrayRow3[1] == size) {
			if (arrayRow1[2] + arrayRow2[2] + arrayRow3[2] == size) {
				return status;
			}
		}
	}
	else {
		status = false;
		return status;
	}

}

bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) //function that checks the Diag sum of the arrays
{
	bool status = true;
	if (arrayRow1[0] + arrayRow2[1] + arrayRow3[2] == size) {
		if (arrayRow3[0] + arrayRow2[1] + arrayRow1[2] == size) {
			return status;
		}
	}
	else {
		status = false;
		return status;
	}
}

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	bool status = true;
	if (checkRange(arrayRow1, arrayRow2, arrayRow3, ROWS, MIN, MAX) == 1) { // if all functions return back true, then isMagicSquare will retrun true
		if (checkUnique(arrayRow1, arrayRow2, arrayRow3, ROWS) == 1) {
			if (checkRowSum(arrayRow1, arrayRow2, arrayRow3, SUM) == 1) {
				if (checkColSum(arrayRow1, arrayRow2, arrayRow3, SUM) == 1) {
					if (checkDiagSum(arrayRow1, arrayRow2, arrayRow3, SUM) == 1) {
						return status;
					}
				}
			}
		}
	}
	else {
		status = false;
		return status;
	}

}
