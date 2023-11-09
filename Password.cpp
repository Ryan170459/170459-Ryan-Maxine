#include <iostream>
#include <string>
using  namespace std;

int main()
{
string password;
int count= 3;
char resp;
//program determining number of times a wrong password is entered
cout << "Please enter password";
cin>>password;
cout << "Wrong password!";
cin>>resp;

while (count <=3){
    cout << "Please Try Again";
    cin>>password; 
}

return 0;
}
