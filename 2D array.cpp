#include <iostream>
using namespace std;
int main()
{
    //Declaring and initializing a 2D Array
    int twoDArray[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //Accessing elements of 2D Array
    cout<<"Element at 2DArray[0][0]:"<<twoDArray[0][0]<<endl;
    cout<<"Element at 2DArray[0][1]:"<<twoDArray[0][1]<<endl;
    cout<<"Element at 2DArray[0][2]:"<<twoDArray[0][2]<<endl;
    cout<<"Element at 2DArray[0][3]:"<<twoDArray[0][3]<<endl;
    cout<<"Element at 2DArray[1][0]:"<<twoDArray[1][0]<<endl;
    cout<<"Element at 2DArray[1][1]:"<<twoDArray[1][1]<<endl;
    cout<<"Element at 2DArray[1][2]:"<<twoDArray[1][2]<<endl;
    cout<<"Element at 2DArray[2][0]:"<<twoDArray[1][3]<<endl;
    cout<<"Element at 2DArray[2][1]:"<<twoDArray[2][0]<<endl;
    cout<<"Element at 2DArray[2][2]:"<<twoDArray[2][1]<<endl;
    cout<<"Element at 2DArray[2][3]:"<<twoDArray[2][2]<<endl;

    return 0;
    }
