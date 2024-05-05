/*
Header to include in source code:
 * Class: CMSC140
 * Instructor: Prof. Laratta
 * Classwork 8
 * Due Date: 12/12/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Miles Levine
*/

#include <iostream>
using namespace std;

//prototype functions
void displayArray(int array[], int size); // Displays the content of the array
void selectionSort(int array[], int size); // sorts the array using the selection sort algorithm in descending order.Hint: refer to example 8 - 5 in the textbook.
//void bubbleSort(int array[], int size);
int findMax(int array[], int size); // finds and returns the highest element of the array
int findMin(int array[], int size); //finds and returns the lowest element of the array
double findAvg(int array[], int size); // finds and returns the average of the elements of the array


int main()
{
	const int MAX_SIZE = 50;
	int testScore[MAX_SIZE];
	int count;
	do {
		cout << "How many scores do you want to enter: ";
		cin >> count;
	} while (count > MAX_SIZE);

	for (int index = 0; index < count; index++) {
		cout << "Enter a score # " << (index + 1) << ": ";
		cin >> testScore[index];
	}

	cout << "Original order test scores are: ";
	displayArray(testScore, count);
	cout << "\n\n";

	cout << "Scores ordered high to low: ";
	selectionSort(testScore, count);
	//bubbleSort(testScore, count);
	displayArray(testScore, count);
	cout << "\n\n";

	cout << "Highest score: " << findMax(testScore, count) << endl << endl;
	cout << "Lowest score: " << findMin(testScore, count) << endl << endl;
	cout << "Avarage score: " << findAvg(testScore, count) << endl << endl;
	
}

void displayArray(int array[], int size)
{
	for (int index = 0; index < size; index++) {
		cout << array[index] << " ";
	}
}

void selectionSort(int array[], int size)
{
	int maxIndex, maxValue;

	for (int start = 0; start < (size - 1); start++) {
		maxIndex = start;
		maxValue = array[start];

		for (int index = start + 1; index < size; index++) {
			if (array[index] > maxValue) {
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}


/* extra practie
void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--) {
		for (index = 0; index < maxElement; index++) {
			if (array[index] < array[index + 1]) {
				swap(array[index], array[index + 1]);
			}
		}
	}
}
*/
int findMax(int array[], int size)
{
	int max = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

int findMin(int array[], int size)
{
	int min = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	return min;
}

double findAvg(int array[], int size)
{
	int avg = 0;
	for (int i = 0; i < size; i++) {
		avg += array[i];
	}
	return ((double)avg/size);
}
