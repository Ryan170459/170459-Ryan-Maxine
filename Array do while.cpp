#include <iostream>
usiing namespace std;
int main()
{
    int index,sum;
    int nums[5];

    do{
        cin>>nums[index];
        sum+=nums[index];
        index++
    }while(index<5);
    cout<<"Sum of the numbers is: "<<sum<<endl;
    do{
        cout<<"Values are:"<<endl;
        cout<<nums[index];
        index++;
    }

    }
