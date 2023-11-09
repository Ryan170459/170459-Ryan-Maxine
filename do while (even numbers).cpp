#include <iostream>
using namespace std;
int main()
//do while loop thatinputs even numbers (12 to 50)int main()
{
    cout << "Program that inputs even numbers from 12 to 50";
    int num =12;
    do{
        cout << num << ",";
        num+=2;
    } while (num <=50);
    cout << "\n\n";

    return 0;
}