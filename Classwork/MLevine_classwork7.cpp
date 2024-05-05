/* 
*Class: CMSC140
*Instructor: Prof Laratta
*Classwork / Homework / <1>
*Due Date: 11/28/21
*I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Miles Levine

*Pseudocode or Algorithm for the program:
1. Prototype function largerThanN
2. Declare const int SIZE as 10 for array
3. declare int number
4. Declare an array arrayNumbers
5. cout asking for a number followed by cin to get the int
6. call function largerThanN
7. inside largerThanN
	a. cout statement to display the numbers that are larger than the inputed number.
	b. for loop that displays the array numbers that are larger than the input number.


*/
#include <iostream>
using namespace std;

void largerThanN(int[], int, int);

int main()
{
	const int SIZE = 10;
	int number;
	int arrayNumbers[SIZE] = { 30, 20, 50, 2, -1, 44, 3, 12, 90, 32 };
	
	cout << "Enter a number: ";
	cin >> number; //10
	largerThanN(arrayNumbers, SIZE, number);

	return 0;
}

void largerThanN(int large[], int size, int num)
{
	cout << "The numbers that are larger than " << num << " are: "; //num = 10
	for (int i = 0; i < size; i++) {

		if (large[i] > num){
			cout << large[i] << " ";
		}
	}
	cout << endl;
}

