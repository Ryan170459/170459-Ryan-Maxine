#include <iostream>
using namespace std;
int main()
{
    //syntax "else if" function
   int age; //variable declaration
   cout << "Please enter age";
   cin >> age;
   if (age>=7){
    cout << "Admit to Grade school";
   }else if (age>=5 & age>=6){
    cout << "Admit to kindergarten";
   }else if (age>=3 & age>=4){
    cout << "Admit to Pre-school";
   }else if (age>=1 & age>=2){
    cout << "Admit to play group";
   }else {
    cout << "Reject admission" << endl;
   }

   return 0;
}
//syntax "else if" successful