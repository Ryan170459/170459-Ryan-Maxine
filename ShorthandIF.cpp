#include <iostream>
using namespace std;
int main()
{
      int age;
      cout <<"Please enter age:";
      cin >> age;

    string message = (age>=4)? "Admit to school for registeration":"Declined! Minimum age not reached";
    cout << message;
    

    return 0;

}