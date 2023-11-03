//Learning operators
#include<iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 =30;
    bool var1 = true, var2 = false;
    //Additional operator (+)
    cout << "Sum of the two numbers" << num1 + num2 <<endl;
    //subtraction operator (-)
    cout << "Difference of the two numbers" << num2 - num1 << endl;
    //Multiplication operator (*)
    cout << "Multiplication of the two numbers" << num1 * num2 <<endl;
    //Division operator (/)
    cout << "Division of the two numbers" << (float) num1 / num2 <<endl;
    //Modulus operator (%)
    cout << "Modulus of the two numbers" << num1 % num2 <<endl;
    //Increment operator (++)
    cout << "Increment num1 by 1:" << ++num1 <<endl;
    //Decrement operators (--)
    cout << "Decrement num1 by 1:" << --num1 <<endl;

}