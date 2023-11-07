#include <iostream>
using namespace std;
int main()
{
double num1,num2;
    cout << "Enter number one";
    cin >> num1;

    cout << "Enter number two";
    cin >> num2;


// Introducing switch case
char choice;
//Determining maximum number
switch (num1 > num2){//Switch case 1 to determine greatest number
case true:
choice = '1';
break;

case false:
choice = '2';
break;
}

switch (choice){//Switch case 2 to show greater number btwn the two
    case '1':
    cout << "Maximum number is:" << num1 <<endl;
    break;

    case '2':
    cout << "Maximum number is:" << num2 <<endl;
    break;

    default:
    cout << "Both numbers are equal"<<endl;
}
return 0;
}