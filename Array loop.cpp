#include <iostream>
using namespace std;
int main()
{
    int nums[5];
    cout << "Please enter 5 values into the array:";
    for (int i = 0; i <5; i++){
        cin >> nums [i];
    }
    cout<<"The values you entered are:"<<endl;

    for (int j =0; j<5; j++){
        cout<<nums [j]<<endl;
    }

return 0;

}