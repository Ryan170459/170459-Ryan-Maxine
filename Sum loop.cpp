#include <iostream>
using  namespace std;
int main()
{
    int value =20, sum= 0;
    while (value<=25)
    {
        sum =sum+value;
        value++;
    }
    cout << "Sum of numbers from 20 to 25 is:" <<sum <<endl;
}