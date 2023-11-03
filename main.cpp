#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname,lastname,fullname,favouritemeal,favouritemovie;
    //simple data input
    cout << "Enter your first name:";
    getline (cin,firstname);
    cout << firstname <<endl;

    cout << "Enter your last name:";
    getline (cin,lastname);
    cout << lastname <<endl;

    cout << "Enter your full name:";
    getline (cin,fullname);
    cout << fullname <<endl;

    cout << "Enter your favourite meal:";
    getline (cin,favouritemeal);
    cout << favouritemeal << endl;

    cout << "Enter your favourite movie:";
    getline (cin,favouritemovie);
    cout << favouritemovie << endl;

    return 0;
}