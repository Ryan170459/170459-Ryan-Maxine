#include <iostream>
using namespace std;
int main()
{
    int sum,product,mean;
    int twoDArray[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for (int rowIndex = 0; rowIndex < 3; ++rowIndex)
    //Iterating 2D array using nested loops
    {
        for (int columnIndex = 0; columnIndex <4; ++columnIndex)
        {
            cout<<twoDArray[rowIndex][columnIndex]<<" ";
            sum +=twoDArray[rowIndex][columnIndex];
            product *=twoDArray[rowIndex][columnIndex];
        }
        cout<<endl;
    }
    cout<<"Sum of values is:"<<sum<<endl;
    cout<<"Product of values is:"<<product<<endl;
    mean = sum/12;
    cout<<"Mean of array is:"<<mean<<endl;
    }
