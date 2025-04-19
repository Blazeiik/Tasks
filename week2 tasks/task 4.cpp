#include <iostream>

using namespace std;

void displayDrink() {
    cout << "Welcome! Please select your desired drink:" << endl;
    cout << "1. Water" << endl;
    cout << "2. Cola" << endl;
    cout << "3. Apple Juice" << endl;
    cout << "4. Energy drink" << endl;
    cout << "5. Coffee" << endl;
    cout << "Enter a number (1-5): ";
}

void showSelection(int choice) {
    switch (choice) {
    case 1:
        cout << "You chose: Water" << endl;
        break;
    case 2:
        cout << "You chose: Cola" << endl;
        break;
    case 3:
        cout << "You chose: Apple juice" << endl;
        break;
    case 4:
        cout << "You chose: Energy drink" << endl;
        break;
    case 5:
        cout << "You chose: Coffee" << endl;
        break;
    default:
        cout << "Invalid selection. Please enter a number between 1 and 5." << endl;
        break;
    }
}

int main() {
    int choice;

    displayDrink();
    cin >> choice;  // Get user input

    showSelection(choice); 

    return 0;
}
