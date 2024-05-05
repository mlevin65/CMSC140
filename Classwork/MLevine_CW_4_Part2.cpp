/*
* Class: CMSC140 CRN
* Instructor: Prof. Laratta
* Classwork <4> Part 2
* Due Date: 10/10/21
*I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Miles Levine

Pseudocode
1. Declare variables numColors, lighted, old, lightedTotal, oldTotal, total, finalTotal, and basePrice.
2. cout statement to ask the number of colors, followed by a cin statement to collect the data.
3. cout statement to ask if lighted, followed by cin statement to collect data.
4. cout statement to ask if an old sign needs to be removed, followed by a cin statement to collect the data.
5. if statement saying that if the user inputs any whole number 1 - 5 then it will display the cost of that corresponding number of colors.
6. if statement saying that if the user inputs "y" or "Y" when asked if lighted, then the basePrice variable will be multiplied by .25 and will be stored into lightedTotal.
7. if statement saying that if the user inputs "y" or "Y" when asked if old sign needes to be removed, then the basePrice variable will be multiplied by .10 and will be stored into oldTotal.
8. if the user enters anything else then an error message will display.
9. Displays the final total at the end of the program. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numColors;
    char lighted;
    char old;
    double lightedTotal;
    double oldTotal;
    double total;
    double finalTotal;
    double basePrice = 0.00;

    //base prices
    const int BASE1 = 250;
    const int BASE2 = 325;
    const int BASE3 = 450;
    const int BASE4 = 625;
    const int BASE5 = 850;

    //asks and stores number of colores
    cout << "Enter the number of colors in the sign: ";
    cin >> numColors;
    cout << endl;

    //askes and stores if lighted
    cout << "Do you want a lighted sign (y/n)? ";
    cin >> lighted;
    cout << endl;

    //askes and stores if old sign needs to be removed
    cout << "Do you need an old sign removed (y/n)? ";
    cin >> old;
    cout << endl;

    if (numColors >= 0) {
        if (lighted != 'y' || lighted != 'n') {
            if (old != 'y' || old != 'n') {
                {

                    if (numColors == 1) {
                        basePrice = BASE1;
                    }
                    else if (numColors == 2) {
                        basePrice = BASE2;
                    }
                    else if (numColors == 3) {
                        basePrice = BASE3;
                    }
                    else if (numColors == 4) {
                        basePrice = BASE4;
                    }
                    else if (numColors == 5) {
                        basePrice = BASE5;
                    }
                    else {
                        basePrice = BASE5;
                    }

                    if (lighted == 'y' || lighted == 'Y') {
                        lightedTotal = basePrice * .25;
                    }

                    if (old != 'y' || old != 'Y') {
                        oldTotal = basePrice * .10;
                    }
                    finalTotal = basePrice + oldTotal + lightedTotal;

                    cout << "The price is:  $" << fixed << showpoint << setprecision(2) << finalTotal;
                }

            }
        }
        else
            cout << "Invalid";
  }

    return 0;
}


