#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;


    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operator (+, -, *, /): ";
    cin>>op;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "ERROR! Division by zero is not allowed.";
                return 0;
            }
            break;

        default:
            cout << "ERROR! Invalid operator.";
            return 0;
    }

    cout << "The result is: " << result << endl;

    return 0;
}