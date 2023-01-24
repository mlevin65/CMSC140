/*
 * Class: CMSC140 CRN 202220
 * Instructor: Prof. Laratta
 * Project 3
 * Due Date: 10/31/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Miles Levine

   Pseudocode
1.	declare variables and string for data
2.	Getline statement to get the hotel location.
3.	cout asking for the num of floors with cin collectiong data, must be 1-5.
4.	Reeds an item of input, while the input is invalid, display an error message, read the input again, end while input validation.
5.	cout asking for total amount of rooms per floor followed by a cin statement to collect data, must be 1-30.
6.	Reeds an item of input, while the input is invalid, display an error message, read the input again, end while input validation.
7.	Cout asking for how many different types of rooms are occupied (single, double, king, and suite) followed by cin statement to 
collect input, total amount of occupied rooms must not exceed the number of rooms per floor.
8.	Reeds an item of input, while the input is invalid, display an error message, read the input again, end while input validation.
9.	Displays the rates of each room.
10.	Calculates and displays the hotel income.
11.	Calculates and displays the total number of rooms.
12.	Calculates and displays total number of occupied rooms.
13.	Calculates and displays total number of unoccupied rooms.
14.	Calculates and displays the occupancy rate.
15.	Displays the floor with the minimum number of rooms.
16.	If statement, if the occupancy rate is less than 60% then displays a message to improve occupancy.

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string hotelLocation;
    double totalNumRooms = 0, totalOccupiedRooms = 0, leastNumRooms;
    int numFloors, numRooms, unoccupiedRooms, numRooms2 = 0, numRooms3 = 0, numRooms4 = 0, numRooms5 = 0;
    int singleRooms, singleRooms2 = 0, singleRooms3 = 0, singleRooms4 = 0, singleRooms5 = 0, doubleRooms, doubleRooms2 = 0, doubleRooms3 = 0, doubleRooms4 = 0, doubleRooms5 = 0,
        kingRooms, kingRooms2 = 0, kingRooms3 = 0, kingRooms4 = 0, kingRooms5 = 0, suiteRooms, suiteRooms2 = 0, suiteRooms3 = 0, suiteRooms4 = 0, suiteRooms5 = 0;
    long double totalRooms, totalRooms2, totalRooms3, totalRooms4, totalRooms5,
        hotelIncome, singleRoomIncome = 0, doubleRoomIncome = 0, kingRoomIncome = 0, suiteRoomIncome = 0, occupancyRate;
    const int MAX_FLOORS = 5, MIN_FLOORS = 0, MAX_ROOMS = 30, MIN_ROOMS = 0, SINGLE_ROOM = 60, DOUBLE_ROOM = 75, KING_ROOM = 100, SUITE_ROOM = 150;
    const string PROGRAMMER_NAME = "Miles Levine";
    const int PROJECT_NUMBER = 3;
    const string DUE_DATE = "10/31/2021";

    cout << "================================================================= \n \t\t\t BlueMont Hotel \n=================================================================" << endl;
    cout << "Enter the location for this hotel chian: ";
    getline(cin, hotelLocation); //collects the location


    cout << "Enter total number of floors on this hotel: ";
    cin >> numFloors; //collects num of floors
    while (numFloors > MAX_FLOORS || numFloors <= MIN_FLOORS) { //input validation with error
        cout << "Number of floors should be between 1 and 5 !! Please try again.";
        cin >> numFloors;
    }
    if (numFloors == 1) { //if user inputs 1 for numFloors
        cout << "Enter total number of rooms in the 1st floor" << endl;
        cin >> numRooms; //collects the amount of rooms for the 1st floor

        while (numRooms > MAX_ROOMS || numRooms <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms;
        }

        cout << "How many SINGLE rooms are occupied in the 1st floor: ";
        cin >> singleRooms;
       
        cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
        cin >> doubleRooms;
      
        cout << "How many KING rooms are occupied in the 1st floor: ";
        cin >> kingRooms;
      
        cout << "How many SUITE rooms are occupied in the 1st floor: ";
        cin >> suiteRooms;
        
        
        totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor

        while (totalRooms > numRooms) { //input validation with error
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            totalRooms = 0; //resets the variable to 0

            cout << "How many SINGLE rooms are occupied in the 1st floor: ";
            cin >> singleRooms;

            cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
            cin >> doubleRooms;

            cout << "How many KING rooms are occupied in the 1st floor: ";
            cin >> kingRooms;

            cout << "How many SUITE rooms are occupied in the 1st floor: ";
            cin >> suiteRooms;

            
            totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor
        }
    }
    else if (numFloors == 2) { //if user inputs 2 for numFloors
        cout << "Enter total number of rooms in the 1st floor" << endl;
        cin >> numRooms; //collects the amount of rooms for the 1st floor

        while (numRooms > MAX_ROOMS || numRooms <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms;
        }
        cout << "How many SINGLE rooms are occupied in the 1st floor: ";
        cin >> singleRooms;

        cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
        cin >> doubleRooms;

        cout << "How many KING rooms are occupied in the 1st floor: ";
        cin >> kingRooms;

        cout << "How many SUITE rooms are occupied in the 1st floor: ";
        cin >> suiteRooms;

        totalRooms = (singleRooms + doubleRooms + kingRooms + suiteRooms); //formula to calculate the total rooms for the 1st floor

        while (totalRooms > numRooms) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 1st floor: ";
            cin >> singleRooms;

            cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
            cin >> doubleRooms;

            cout << "How many KING rooms are occupied in the 1st floor: ";
            cin >> kingRooms;

            cout << "How many SUITE rooms are occupied in the 1st floor: ";
            cin >> suiteRooms;
            
            totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor
        }
        cout << "Enter total number of rooms in the 2nd floor" << endl;
        cin >> numRooms2;

        while (numRooms2 > MAX_ROOMS || numRooms2 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms2;
        }
        cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
        cin >> singleRooms2;

        cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
        cin >> doubleRooms2;

        cout << "How many KING rooms are occupied in the 2nd floor: ";
        cin >> kingRooms2;

        cout << "How many SUITE rooms are occupied in the 2nd floor: ";
        cin >> suiteRooms2;

        totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor

        while (totalRooms2 > numRooms2) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
            cin >> singleRooms2;

            cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
            cin >> doubleRooms2;

            cout << "How many KING rooms are occupied in the 2nd floor: ";
            cin >> kingRooms2;

            cout << "How many SUITE rooms are occupied in the 2nd floor: ";
            cin >> suiteRooms2;
            
            totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor
        }

    }
    else if (numFloors == 3) { //if user inputs 3 for numFloors
        cout << "Enter total number of rooms in the 1st floor" << endl;
        cin >> numRooms; //collects the amount of rooms for the 1st floor

        while (numRooms > MAX_ROOMS || numRooms <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms;
        }
        cout << "How many SINGLE rooms are occupied in the 1st floor: ";
        cin >> singleRooms;

        cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
        cin >> doubleRooms;

        cout << "How many KING rooms are occupied in the 1st floor: ";
        cin >> kingRooms;

        cout << "How many SUITE rooms are occupied in the 1st floor: ";
        cin >> suiteRooms;

        totalRooms = (singleRooms + doubleRooms + kingRooms + suiteRooms); //formula to calculate the total rooms for the 1st floor

        while (totalRooms > numRooms) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 1st floor: ";
            cin >> singleRooms;

            cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
            cin >> doubleRooms;

            cout << "How many KING rooms are occupied in the 1st floor: ";
            cin >> kingRooms;

            cout << "How many SUITE rooms are occupied in the 1st floor: ";
            cin >> suiteRooms;

            totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor
        }
        cout << "Enter total number of rooms in the 2nd floor" << endl; //asking for 2nd floor
        cin >> numRooms2;

        while (numRooms2 > MAX_ROOMS || numRooms2 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms2;
        }
        cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
        cin >> singleRooms2;

        cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
        cin >> doubleRooms2;

        cout << "How many KING rooms are occupied in the 2nd floor: ";
        cin >> kingRooms2;

        cout << "How many SUITE rooms are occupied in the 2nd floor: ";
        cin >> suiteRooms2;

        totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor

        while (totalRooms2 > numRooms2) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
            cin >> singleRooms2;

            cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
            cin >> doubleRooms2;

            cout << "How many KING rooms are occupied in the 2nd floor: ";
            cin >> kingRooms2;

            cout << "How many SUITE rooms are occupied in the 2nd floor: ";
            cin >> suiteRooms2;

            totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor
        }
        cout << "Enter total number of rooms in the 3rd floor" << endl; //asking 3rd floor
        cin >> numRooms3;

        while (numRooms3 > MAX_ROOMS || numRooms3 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms3;
        }
        cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
        cin >> singleRooms3;

        cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
        cin >> doubleRooms3;

        cout << "How many KING rooms are occupied in the 3rd floor: ";
        cin >> kingRooms3;

        cout << "How many SUITE rooms are occupied in the 3rd floor: ";
        cin >> suiteRooms3;

        totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

        while (totalRooms3 > numRooms3) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
            cin >> singleRooms3;

            cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
            cin >> doubleRooms3;

            cout << "How many KING rooms are occupied in the 3rd floor: ";
            cin >> kingRooms3;

            cout << "How many SUITE rooms are occupied in the 3rd floor: ";
            cin >> suiteRooms3;

            totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

        }
    }
        else if (numFloors == 4) { //if user inputs 4 for numFloors
        cout << "Enter total number of rooms in the 1st floor" << endl;
        cin >> numRooms; //collects the amount of rooms for the 1st floor

        while (numRooms > MAX_ROOMS || numRooms <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms;
        }
        cout << "How many SINGLE rooms are occupied in the 1st floor: ";
        cin >> singleRooms;

        cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
        cin >> doubleRooms;

        cout << "How many KING rooms are occupied in the 1st floor: ";
        cin >> kingRooms;

        cout << "How many SUITE rooms are occupied in the 1st floor: ";
        cin >> suiteRooms;

        totalRooms = (singleRooms + doubleRooms + kingRooms + suiteRooms); //formula to calculate the total rooms for the 1st floor

        while (totalRooms > numRooms) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 1st floor: ";
            cin >> singleRooms;

            cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
            cin >> doubleRooms;

            cout << "How many KING rooms are occupied in the 1st floor: ";
            cin >> kingRooms;

            cout << "How many SUITE rooms are occupied in the 1st floor: ";
            cin >> suiteRooms;

            totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor
        }
        cout << "Enter total number of rooms in the 2nd floor" << endl; //asking for 2nd floor
        cin >> numRooms2;

        while (numRooms2 > MAX_ROOMS || numRooms2 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms2;
        }
        cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
        cin >> singleRooms2;

        cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
        cin >> doubleRooms2;

        cout << "How many KING rooms are occupied in the 2nd floor: ";
        cin >> kingRooms2;

        cout << "How many SUITE rooms are occupied in the 2nd floor: ";
        cin >> suiteRooms2;

        totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor

        while (totalRooms2 > numRooms2) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
            cin >> singleRooms2;

            cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
            cin >> doubleRooms2;

            cout << "How many KING rooms are occupied in the 2nd floor: ";
            cin >> kingRooms2;

            cout << "How many SUITE rooms are occupied in the 2nd floor: ";
            cin >> suiteRooms2;

            totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor
        }
        cout << "Enter total number of rooms in the 3rd floor" << endl; //asking 3rd floor
        cin >> numRooms3;

        while (numRooms3 > MAX_ROOMS || numRooms3 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms3;
        }
        cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
        cin >> singleRooms3;

        cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
        cin >> doubleRooms3;

        cout << "How many KING rooms are occupied in the 3rd floor: ";
        cin >> kingRooms3;

        cout << "How many SUITE rooms are occupied in the 3rd floor: ";
        cin >> suiteRooms3;

        totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

        while (totalRooms3 > numRooms3) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
            cin >> singleRooms3;

            cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
            cin >> doubleRooms3;

            cout << "How many KING rooms are occupied in the 3rd floor: ";
            cin >> kingRooms3;

            cout << "How many SUITE rooms are occupied in the 3rd floor: ";
            cin >> suiteRooms3;

            totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

        }
        cout << "Enter total number of rooms in the 4th floor" << endl; //asking 4th floor
        cin >> numRooms4;

        while (numRooms4 > MAX_ROOMS || numRooms4 <= MIN_ROOMS) { //input validation with error
            cout << "Number of rooms should be between 1 and 30 !! Please try again.";
            cin >> numRooms4;
        }
        cout << "How many SINGLE rooms are occupied in the 4th floor: ";
        cin >> singleRooms4;

        cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
        cin >> doubleRooms4;

        cout << "How many KING rooms are occupied in the 4th floor: ";
        cin >> kingRooms4;

        cout << "How many SUITE rooms are occupied in the 4th floor: ";
        cin >> suiteRooms4;

        totalRooms4 = singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4; //formula to calculate the total rooms for the 4th floor

        while (totalRooms4 > numRooms4) { //input validation with error
            totalRooms = 0; //resets the variable to 0
            cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

            cout << "How many SINGLE rooms are occupied in the 4th floor: ";
            cin >> singleRooms4;

            cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
            cin >> doubleRooms4;

            cout << "How many KING rooms are occupied in the 4th floor: ";
            cin >> kingRooms4;

            cout << "How many SUITE rooms are occupied in the 4th floor: ";
            cin >> suiteRooms4;

            totalRooms4 = singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4; //formula to calculate the total rooms for the 4th floor
        }
    }
            else if (numFloors == 5) { //if user inputs 5 for numFloors
            cout << "Enter total number of rooms in the 1st floor" << endl;
            cin >> numRooms; //collects the amount of rooms for the 1st floor

            while (numRooms > MAX_ROOMS || numRooms <= MIN_ROOMS) { //input validation with error
                cout << "Number of rooms should be between 1 and 30 !! Please try again.";
                cin >> numRooms;
            }
            cout << "How many SINGLE rooms are occupied in the 1st floor: ";
            cin >> singleRooms;

            cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
            cin >> doubleRooms;

            cout << "How many KING rooms are occupied in the 1st floor: ";
            cin >> kingRooms;

            cout << "How many SUITE rooms are occupied in the 1st floor: ";
            cin >> suiteRooms;

            totalRooms = (singleRooms + doubleRooms + kingRooms + suiteRooms); //formula to calculate the total rooms for the 1st floor

            while (totalRooms > numRooms) { //input validation with error
                totalRooms = 0; //resets the variable to 0
                cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

                cout << "How many SINGLE rooms are occupied in the 1st floor: ";
                cin >> singleRooms;

                cout << "How many DOUBLE rooms are occupied in the 1st floor: ";
                cin >> doubleRooms;

                cout << "How many KING rooms are occupied in the 1st floor: ";
                cin >> kingRooms;

                cout << "How many SUITE rooms are occupied in the 1st floor: ";
                cin >> suiteRooms;

                totalRooms = singleRooms + doubleRooms + kingRooms + suiteRooms; //formula to calculate the total rooms for the 1st floor
            }
            cout << "Enter total number of rooms in the 2nd floor" << endl; //asking for 2nd floor
            cin >> numRooms2;

            while (numRooms2 > MAX_ROOMS || numRooms2 <= MIN_ROOMS) { //input validation with error
                cout << "Number of rooms should be between 1 and 30 !! Please try again.";
                cin >> numRooms2;
            }
            cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
            cin >> singleRooms2;

            cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
            cin >> doubleRooms2;

            cout << "How many KING rooms are occupied in the 2nd floor: ";
            cin >> kingRooms2;

            cout << "How many SUITE rooms are occupied in the 2nd floor: ";
            cin >> suiteRooms2;

            totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor

            while (totalRooms2 > numRooms2) { //input validation with error
                totalRooms = 0; //resets the variable to 0
                cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

                cout << "How many SINGLE rooms are occupied in the 2nd floor: ";
                cin >> singleRooms2;

                cout << "How many DOUBLE rooms are occupied in the 2nd floor: ";
                cin >> doubleRooms2;

                cout << "How many KING rooms are occupied in the 2nd floor: ";
                cin >> kingRooms2;

                cout << "How many SUITE rooms are occupied in the 2nd floor: ";
                cin >> suiteRooms2;

                totalRooms2 = singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2; //formula to calculate the total rooms for the 2nd floor
            }
            cout << "Enter total number of rooms in the 3rd floor" << endl; //asking 3rd floor
            cin >> numRooms3;

            while (numRooms3 > MAX_ROOMS || numRooms3 <= MIN_ROOMS) { //input validation with error
                cout << "Number of rooms should be between 1 and 30 !! Please try again.";
                cin >> numRooms3;
            }
            cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
            cin >> singleRooms3;

            cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
            cin >> doubleRooms3;

            cout << "How many KING rooms are occupied in the 3rd floor: ";
            cin >> kingRooms3;

            cout << "How many SUITE rooms are occupied in the 3rd floor: ";
            cin >> suiteRooms3;

            totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

            while (totalRooms3 > numRooms3) { //input validation with error
                totalRooms = 0; //resets the variable to 0
                cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

                cout << "How many SINGLE rooms are occupied in the 3rd floor: ";
                cin >> singleRooms3;

                cout << "How many DOUBLE rooms are occupied in the 3rd floor: ";
                cin >> doubleRooms3;

                cout << "How many KING rooms are occupied in the 3rd floor: ";
                cin >> kingRooms3;

                cout << "How many SUITE rooms are occupied in the 3rd floor: ";
                cin >> suiteRooms3;

                totalRooms3 = singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3; //formula to calculate the total rooms for the 3rd floor

            }
            cout << "Enter total number of rooms in the 4th floor" << endl; //asking 4th floor
            cin >> numRooms4;

            while (numRooms4 > MAX_ROOMS || numRooms4 <= MIN_ROOMS) { //input validation with error
                cout << "Number of rooms should be between 1 and 30 !! Please try again.";
                cin >> numRooms4;
            }
            cout << "How many SINGLE rooms are occupied in the 4th floor: ";
            cin >> singleRooms4;

            cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
            cin >> doubleRooms4;

            cout << "How many KING rooms are occupied in the 4th floor: ";
            cin >> kingRooms4;

            cout << "How many SUITE rooms are occupied in the 4th floor: ";
            cin >> suiteRooms4;

            totalRooms4 = singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4; //formula to calculate the total rooms for the 4th floor

            while (totalRooms4 > numRooms4) { //input validation with error
                totalRooms = 0; //resets the variable to 0
                cout << "Number of occupied rooms should not be greater than the number of rooms per floor !! Please try again." << endl << endl;

                cout << "How many SINGLE rooms are occupied in the 4th floor: ";
                cin >> singleRooms4;

                cout << "How many DOUBLE rooms are occupied in the 4th floor: ";
                cin >> doubleRooms4;

                cout << "How many KING rooms are occupied in the 4th floor: ";
                cin >> kingRooms4;

                cout << "How many SUITE rooms are occupied in the 4th floor: ";
                cin >> suiteRooms4;

                totalRooms4 = singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4; //formula to calculate the total rooms for the 4th floor
            }
            cout << "Enter total number of rooms in the 5th floor" << endl; //asking 5th floor
            cin >> numRooms5;

            while (numRooms5 > MAX_ROOMS || numRooms5 <= MIN_ROOMS) { //input validation with error
                cout << "Number of rooms should be between 1 and 30 !! Please try again.";
                cin >> numRooms5;
            }
            cout << "How many SINGLE rooms are occupied in the 5th floor: ";
            cin >> singleRooms5;

            cout << "How many DOUBLE rooms are occupied in the 5th floor: ";
            cin >> doubleRooms5;

            cout << "How many KING rooms are occupied in the 5th floor: ";
            cin >> kingRooms5;

            cout << "How many SUITE rooms are occupied in the 5th floor: ";
            cin >> suiteRooms5;

            totalRooms5 = singleRooms5 + doubleRooms5 + kingRooms5 + suiteRooms5; //formula to calculate the total rooms for the 5th floor

            while (totalRooms5 > numRooms5) { //input validation with error
                totalRooms = 0; //resets the variable to 0
                cout << "How many SINGLE rooms are occupied in the 5th floor: ";
                cin >> singleRooms5;

                cout << "How many DOUBLE rooms are occupied in the 5th floor: ";
                cin >> doubleRooms5;

                cout << "How many KING rooms are occupied in the 5th floor: ";
                cin >> kingRooms5;

                cout << "How many SUITE rooms are occupied in the 5th floor: ";
                cin >> suiteRooms5;

                totalRooms5 = singleRooms5 + doubleRooms5 + kingRooms5 + suiteRooms5; //formula to calculate the total rooms for the 5th floor
            }
    }

        

    //income calculation
    singleRoomIncome = (SINGLE_ROOM * (singleRooms + singleRooms2 + singleRooms3 + singleRooms4 + singleRooms5));
    doubleRoomIncome += (DOUBLE_ROOM * (doubleRooms + doubleRooms2 + doubleRooms3 + doubleRooms4 + doubleRooms5));
    kingRoomIncome += (KING_ROOM * (kingRooms + kingRooms2 + kingRooms3 + kingRooms4 + kingRooms5));
    suiteRoomIncome += (SUITE_ROOM * (suiteRooms + suiteRooms2 + suiteRooms3 + suiteRooms4 + suiteRooms5));
    hotelIncome = singleRoomIncome + doubleRoomIncome + kingRoomIncome + suiteRoomIncome;
    
    
    totalNumRooms = (numRooms + numRooms2 + numRooms3 + numRooms4 + numRooms5); //formula to calculate the total amount of roooms in the hotel
    

   //formula to calculate the total occupied rooms in the hotel
    totalOccupiedRooms = (singleRooms + doubleRooms + kingRooms + suiteRooms) + (singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2) + 
        (singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3) + (singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4) + (singleRooms5 + doubleRooms5 + kingRooms5 + suiteRooms5);

    //formula to calculate the unoccupied rooms and occupancy rate
    unoccupiedRooms = (totalNumRooms - totalOccupiedRooms);
    occupancyRate = ((totalOccupiedRooms / totalNumRooms) * 100);
    
    //displays menu and data
    cout << "\n\n=====================================================================================================\n\t\tBlueMont Hotel located in "
        << hotelLocation << "\n\t\t\tTODAYS'S ROOM RATES(US$/night)\n\n\t\tSingle Room\t\tDouble Room\t\tKing Room\t\tSuite Room\n\n\t\t\t60\t\t\t75\t\t\t100\t\t\t150\n=====================================================================================================";
    cout << "\nHotel Income:\t $" << fixed << showpoint << setprecision(2) << hotelIncome << endl;
    cout << setprecision(0) << "Total number of rooms:\t" << totalNumRooms << endl;
    cout << "Total number of occupied rooms:\t" << totalOccupiedRooms << endl;
    cout << "Total of unoccupied rooms:\t" << unoccupiedRooms << endl;
    cout << "Occupancy rate:\t" << fixed << showpoint << setprecision(2) << occupancyRate << "%" << endl;
    
    if (numFloors == 2) {
        if (numRooms < numRooms2) { //shows which floor has the least amount of rooms
                        cout << "1st floor with " << numRooms << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms2 < numRooms) {
                        cout << "2nd floor with " << numRooms2 << " rooms, has the least number of rooms." << endl;
        }
    }
    else if (numFloors == 3) {
        if (numRooms < numRooms2) { //shows which floor has the least amount of rooms
            if (numRooms < numRooms3)
                        cout << "1st floor with " << numRooms << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms2 < numRooms) {
            if (numRooms2 < numRooms3)
                        cout << "2nd floor with " << numRooms2 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms3 < numRooms) {
            if (numRooms3 < numRooms2)
                        cout << "3rd floor with " << numRooms3 << " rooms, has the least number of rooms." << endl;
        }
    }
    else if (numFloors == 4) {
        if (numRooms < numRooms2) { //shows which floor has the least amount of rooms
            if (numRooms < numRooms3)
                if (numRooms < numRooms4)
                        cout << "1st floor with " << numRooms << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms2 < numRooms) {
            if (numRooms2 < numRooms3)
                if (numRooms2 < numRooms4)
                        cout << "2nd floor with " << numRooms2 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms3 < numRooms) {
            if (numRooms3 < numRooms2)
                if (numRooms3 < numRooms4)
                        cout << "3rd floor with " << numRooms3 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms4 < numRooms) {
            if (numRooms4 < numRooms2)
                if (numRooms4 < numRooms3)
                        cout << "4th floor with " << numRooms4 << " rooms, has the least number of rooms." << endl;
        }
    }
    else if (numFloors == 5) {
        if (numRooms < numRooms2) { //shows which floor has the least amount of rooms
            if (numRooms < numRooms3)
                if (numRooms < numRooms4)
                    if (numRooms < numRooms5)
                        cout << "1st floor with " << numRooms << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms2 < numRooms) {
            if (numRooms2 < numRooms3)
                if (numRooms2 < numRooms4)
                    if (numRooms2 < numRooms5)
                        cout << "2nd floor with " << numRooms2 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms3 < numRooms) {
            if (numRooms3 < numRooms2)
                if (numRooms3 < numRooms4)
                    if (numRooms3 < numRooms5)
                        cout << "3rd floor with " << numRooms3 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms4 < numRooms) {
            if (numRooms4 < numRooms3)
                if (numRooms4 < numRooms2)
                    if (numRooms4 < numRooms5)
                        cout << "4th floor with " << numRooms4 << " rooms, has the least number of rooms." << endl;
        }
        else if (numRooms5 < numRooms) {
            if (numRooms5 < numRooms3)
                if (numRooms5 < numRooms2)
                    if (numRooms5 < numRooms4)
                        cout << "5th floor with " << numRooms5 << " rooms, has the least number of rooms." << endl;
        }
    }
    if (occupancyRate < 60) { //if occupancy rate is below 60% the displays message to improve occupancy rate
        cout << "Need to improve Hotel occupancy rate!!"<< endl<< endl;

    }

    // ending
    cout << "\n\nThank you for testing my program!!" << endl;
    cout << "Programer: " << PROGRAMMER_NAME << endl;
    cout << "CMSC140 Common Project " << PROJECT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    return 0;
}