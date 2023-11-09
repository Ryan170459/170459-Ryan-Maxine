#include <iostream>
using namespace std;
int main() {
    int age;
    char movieType;
    double ticketPrice;

//customer input details
    cout << "Welcome to Matrix cinemas!\n";
    cout << "Please enter your age: ";
    cin >> age;

    if (age <= 0 && age >=120) {
        cout << "Invalid age. Please enter a valid age.\n";
        return 1;
    }
//customer to input type of movie
    cout << "Enter 'R' for regular movie or '3' for 3D movie: ";
    cin >> movieType;

    if (movieType == 'R' || movieType == 'r') {//introducing if, else if and else statement
        if (age<=11) {
            ticketPrice = 7.00;
        } else if (age<=60) {
            ticketPrice = 9.20;
        } else {
            ticketPrice = 8.00;
        }
    } else if (movieType == '3' || movieType == '3') {
        if (age<=11) {
            ticketPrice = 8.50;
        } else if (age<=60) {
            ticketPrice = 12.20;
        } else {
            ticketPrice = 11.50;
        }
    } else {
        cout << "Invalid movie type. Please enter 'R' for regular or '3' for 3D.\n";
        return 1;
    }

    cout << "Your ticket price is: $" << ticketPrice << endl;

    return 0;
}


