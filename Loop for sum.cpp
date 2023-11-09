#include <iostream>
using namespace std;
//program that computes sum of numbers btwn 20 and 25
int main() 
{
    cout << "A simple program to compute sum of numbers btwn 20 and 25";
    cout << "Using a for loop\n";
    for (int value1 = 20, sum = 0; value1<=25; value1+=1)
    {
        sum+=value1;
        cout <<"The sum of numbers is:"<<sum<<endl;
    }

    return 0;
}