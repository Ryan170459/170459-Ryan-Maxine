#include <iostream>
using namespace std;
int main()
{
    int age;
    string interest1, interest2;
    cout << "Please enter age";
    cin >> age;
    cout << "Please enter interest";
    cin>>interest1,interest2;

    if (age>=4 && age<=10) {
        if (interest1 == "Soccer"){
            cout << "Assigned to soccer play group";
        }
        if (interest2 == "Art"){
            cout << "Assigned to art play group";
        }
        else{
            cout << "Assigned to other groups";
        }
      

      }
        else {
            cout << "ERROR!Minimum age";
      }


        return 0;
 }
