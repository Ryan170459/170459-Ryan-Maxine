#include <iostream>
using namespace std;
int main()
{
    //Declaration and initialization of array elements of 10
    int myNums[] = {10,20,30,40,50,60,70,80,90,100};
    int sum,prod;
    for (int j=0;j<sizeof(myNums)/sizeof(int);j++)
    {
         sum += myNums[j];
         prod*=myNums[j]; //

    }
    cout << "The sum is:" <<sum<<endl;
    cout<< "The product is:"<<prod<<endl;

    return 0;
}