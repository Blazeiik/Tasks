#include <iostream>

using namespace std;

int main()
{
    // ask for the grade
    int grade;
    cout << "Enter your grade between 0 and 100: ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
        cout << "Error: Grade must be between 0 and 100." << endl;
        return 1; // exits the program with an error due to wrong input
    }
    // determine the grade category
    if (grade >= 80) {
        cout << "Grade A*" << endl;
    }
    if (grade >= 70 && grade < 80) {
        cout << "Grade A" << endl;
    }
    if (grade >= 60 && grade < 70) {
        cout << "Grade B" << endl;
    }
    if (grade >= 50 && grade < 60) {
        cout << "Grade C" << endl;
    }
    if (grade >= 40 && grade < 50) {
        cout << "Grade D" << endl;
    }
    if (grade >= 1 && grade < 40) {
        cout << "Grade F" << endl;
    }
    if (grade == 0) {
        cout << "Grade U" << endl;
    }
    return 0;
}