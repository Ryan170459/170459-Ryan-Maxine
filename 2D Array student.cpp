#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Declaring and initializing a 2D Array
    string studentDetails[5][4]={
        {"1111","1112","1113","1114"},
        {"James Daniel","Ryan Maxine","Leila Morgan","Ann Susan"},
        {"BBIT","BCOM","CNS","ICS"},
        {"80.45","76.56","90.25","78.69"},
        {"A","A","A","A"}
    };
    for(int rowIndex=0; rowIndex<5; ++rowIndex){
        for (int columnIndex=0; columnIndex<4; ++columnIndex)
        {
            cout<<studentDetails[rowIndex][columnIndex]<<" ";
        }
        cout<<endl;
        }

        return 0;
    }
    

    
    
