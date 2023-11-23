#include<iostream>
using namespace std;
int main()
{
    int nums[5];
    int index;
    int sum;
    cout<<"Enter 5 values:\n";
    while(index<5){
        cin>>nums[index];
        sum+=nums[index];
        index++;
    }
        cout<<"Sum of entered values is: "<<sum<<endl;

        return 0;
    }
    
