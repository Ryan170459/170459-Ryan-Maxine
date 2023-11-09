#include <iostream>
using  namespace std;
//program that calculates sum of integers input by a user
int main()
{
    int value1,sum;

    do
    {
    cout << "Enter first value"<<endl;
    cin>>value1;
    sum = sum + value1;
    }while (value1!=0);

    cout << "The sum of numbers is:" <<sum <<endl;

    return 0;
}