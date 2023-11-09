#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    while (true) { //choice output
        cout << "Menu Options:" << endl;
        cout << "1. Calculate area of circle" << endl;
        cout << "2. Calculate area of rectangle" << endl;
        cout << "3. Calculate area of triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { //calculating area of circle
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                double area = M_PI * pow(radius, 2);
                cout << "Area of the circle is: " << area << endl;
                break;
            }

            case 2: { //calculating area of rectangle
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double area = length * width;
                cout << "Area of the rectangle is: " << area << endl;
                break;
            }

            case 3: { //calculating area of triangle
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                double area = 0.5 * base * height;
                cout << "Area of the triangle is: " << area << endl;
                break;
            }

            case 4:
                cout << "Till next time" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
//code debugged and tested