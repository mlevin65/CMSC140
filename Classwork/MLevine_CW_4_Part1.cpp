/*
Header to include in source code:
 * Class: CMSC140 CRN
 * Instructor: Prof. Larata
 * Classwork 4 Part 1
 * Due Date: 10/3/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Miles Levine

   * Pseudocode or Algorithm for the program:
   1. Declare variables days, discountPct, discountCost, total, and noDiscount
   2. cout and cin to collect the amount of days
   3. If statement that gives an error if days is <= 0
   4. else if statement for days with values are 1 or 2.
   5. cout statements saying that there will be no discount for 1 or 2 days, displays the cost without the discount.
   6. else if statement for days with values ranging from 3 to 4, setting the discount for 10% off, subtract the discount from the total, then displaying the total
   7. else if statement for days with values ranging from 5 to 6, setting the discount for 25% off, subtract the discount from the total, then displaying the total
   8. else if statement for days with values ranging from 7 to 9, setting the discount for 33% off, subtract the discount from the total, then displaying the total
   9. else if statement for days with values ranging when days >= 10, setting the discount for 42% off, subtract the discount from the total, then displaying the total

	*/

#include <iostream>
using namespace std;
int main()
{
	int days;
	double discountPct;
	double discountCost;
	double total;
	double noDiscount;

	cout << "How many days of tickets were sold? ";
	cin >> days;

	if (days <= 0)
	{
		cout << "Tickets must be greater than zero.";

	}
	
	else if (days == 1 || days == 2)
	{
		noDiscount = days * 109;
		cout << "The total cost of the purchase without discount is " << noDiscount;

	}

	
	else if (days >= 3 && days <= 4)
	{
		discountPct = .10;
		discountCost = 109 - (109 * discountPct);
		total = days * discountCost;
		cout << "The total cost of the purchase is " << total;
	}

	else if (days >= 5 && days <= 6)
	{
		discountPct = .25;
		discountCost = 109 - (109 * discountPct);
		total = days * discountCost;
		cout << "The total cost of the purchase is " << total;
	}
	
	else if (days >= 7 && days <= 9)
	{
		discountPct = .33;
		discountCost = 109 - (109 * discountPct);
		total = days * discountCost;
		cout << "The total cost of the purchase is " << total;
	}
	
	else if (days >= 10)
	{
		discountPct = .42;
		discountCost = 109 - (109 * discountPct);
		total = days * discountCost;
		cout << "The total cost of the purchase is " << total;
	}

	return 0;
}



