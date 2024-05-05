/* Header to include in source code:
* Class: CMSC140 Instructor: Prof. Laratta
* Classwork 3
* Due Date: 9/26/21
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student. Print your Name here: Miles Levine
* Pseudocode or Algorithm for the program:
1.Declare integers: name, syllabusQuizScore, quiz1Score, quiz2Score, classwork1Score, classwork2Score, finalScore, and avrageScore.
2.Prompt user to input test scores.
3.Receive the input for name, syllabusQuizScore, quiz1Score, quiz2Score, classwork1Score, classwork2Score.
4.Declare doubles: finalScore and avrageScore.
5.Caculate/Add syllabusQuizScore, quiz1Score, quiz2Score, classwork1Score, and classwork2Score and store value in finalScore.
6.Calculate/Divide finalScore by 5 to get the avrage, then store value in avrageScore.
7.Set percision to 2 decimal place.
8.Display name, finalScore and avrageScore.
9.End program.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <float.h>
using namespace std;
int main()
{
	//declaring varables
	string name; //declaring name as the variable for string
	int syllabusQuizScore; //declaring variables for the input of scores
	int quiz1Score;
	int quiz2Score;
	int classwork1Score;
	int classwork2Score;


	//outputs and inputs
	cout << "Enter the student's name: " << endl;
	cin >> name;
	cout << "Enter Syllabus Quiz Score ranging from 0 to 100: " << endl;
	cin >> syllabusQuizScore;
	cout << "Enter Chapter 1 Quiz ranging from 0 to 100: " << endl;
	cin >> quiz1Score;
	cout << "Enter Chapter 2 Quiz ranging from 0 to 100: " << endl;
	cin >> quiz2Score;
	cout << "Enter Programming Classwork1 ranging from 0 to 100: " << endl;
	cin >> classwork1Score;
	cout << "Enter Programming Classwork2 ranging from 0 to 100: " << endl;
	cin >> classwork2Score;
	//arithmitic calculations from the input data
	double finalScore = (syllabusQuizScore)+(quiz1Score)+(quiz2Score)+(classwork1Score)+(classwork2Score);
	double avrageScore = (finalScore / 5);
	//output for final and avrage score
	cout << fixed << showpoint << setprecision(2);
	cout << name << ": " << "Final Score: " << finalScore << " Avrage Score: " << avrageScore;

	return 0;
}
