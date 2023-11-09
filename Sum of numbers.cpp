#include <iostream>
using namespace std;
int main()
//do while loop that computes  sum of numbers btwn 20 & 25
{
    cout << "Program that computes sum of numbers btwn 20 & 25";
    int value1=20 , sum=0;
    do{
        sum = sum + value1;
        value1++;
        
    } while (value1<=25);

    cout << "Sum of numbers from 20 to 25 is:"<<sum<<endl;
    return 0;
}