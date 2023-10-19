#include <iostream>
#include <string>
using namespace std;

//Global variable declaration and initialization
int globalVar = 30;
const int age = 25; // Constant global variable. Value will not change
//
void myFunction()
{
    //Function code block
    //Local variables
    int localVar2 = 12;
    string localString1="LOcal String 1", localString2 = "Local String 2";
    cout<<"Local Variable 1 =" << localVar2 << endl;
}
//
void addAndDisplay(int value1, int value2) //A function to add and display values
//Function code block
{
globalVar =50;
cout << "Global variable value =" << globalVar;
cout << "Global variable age =" << age; endl;
//cout << " Local Variable 1 =" << localVar1;
myFunction()
return 0;
}