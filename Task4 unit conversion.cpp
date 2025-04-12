#include <iostream>

// Ask the user to input a length in inches.
// Perform the following conversions :
// Convert the length to feet using the formula : 1 foot = 12 inches.
// Convert the length to meters using the formula : 1 inch = 0.0254 meters.
// Convert the length to centimeters using the formula : 1 inch = 2.54 centimeters.
// Print all the converted values.

using namespace std;

int main()
{

    cout << "Enter the lenght in inches: ";
    double inches;
    cin >> inches;
    double feet = inches / 12;
    double meters = inches * 0.0254;
    double centimeters = inches * 2.54;
    cout << " The length in feet is: " << feet << endl;
    cout << " The length in meters is: " << meters << endl;
    cout << " The length in centimeters is: " << centimeters << endl;

    return 0;
}