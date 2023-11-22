#include <iostream>
#include <string>
using namespace std;
int main()
{
//variable declaration
int num1,num2,num3;
    cout << "Enter number one\n";
    cin >> num1;

    cout << "Enter number two\n";
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