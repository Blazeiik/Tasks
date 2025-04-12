#include <iostream>
using namespace std;

// Ask the user to input three numbers.
// Calculate the sum and divide by 3 to get the average.
// Print the result.
// Bonus Tasks :
// Modify the program to accept five numbers.
// Also calculate and display the sum and product of the numbers entered.;

int main()
{
   cout << "Enter your 5 numbers: ";
   double num1, num2, num3, num4, num5, average;

   cin >> num1 >> num2 >> num3 >> num4 >> num5;

   average = (num1 + num2 + num3 + num4 + num5) / 3;

   cout << "The average of the numbers is: " << average << endl;

   return 0;
}