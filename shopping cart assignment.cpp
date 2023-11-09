#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double lateFee = 0.0;

    cout << "Enter the number of days late: ";//
    cin >> Dayslate;

    cout << "Enter the type of book (R for Regular, C for Children's, or X for Reference): ";
    cin >> BookType;

    if (daysLate <= 0) {//Introducing if else 
        cout << "No late fee for on-time return." << endl;
    } else {
        if (bookType == 'R' || bookType == 'r') {
            if (daysLate <= 7) {
                lateFee = daysLate * 0.50;
            } else {
                lateFee = 7 * 0.50 + (daysLate - 7) * 1.00;
            }
        } else if (bookType == 'C' || bookType == 'c') {
            if (daysLate <= 7) {
                lateFee = daysLate * 0.25;
            } else {
                lateFee = 7 * 0.25 + (daysLate - 7) * 0.50;
            }
        } else if (bookType == 'X' || bookType == 'x') {
            if (daysLate <= 7) {
                lateFee = daysLate * 1.00;
            } else {
                lateFee = 7 * 1.00 + (daysLate - 7) * 2.00;
            }
        } else {
            cout << "Invalid book type. Please enter R, C, or X for the book type." << endl;
            return 0;
        }

        cout << "The late fee for the book is: $" << lateFee << endl;
    }

    return 0;
}
//code debugged and tested