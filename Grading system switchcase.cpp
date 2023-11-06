#include <iostream>
#include <string>
using namespace std;
int main()
{
    int opt;//switch case variable
    cout << "Hi, This is your BBIT Sem 1(Sept-Dec 2023)";
    cout <<"\n1.Mon\n2.Tue\n3.Wed\n4.Thur\n5.Fri" <<endl;
    cout << "Please select day of choice (i.e. 1, 2, 3, e.t.c.....)" <<endl;
    cin >> opt;

    switch (opt){
        case 1:
        cout << "Mon classes\n......" <<endl;
        cout << "\t1.BBIT 1106: Math for Biz"<<endl;
        cout << "\t2.BBIT 1102: Intro to programming"<<endl;
        break;

        case 2:
        cout << "Tue classes\n......" <<endl;
        cout << "\t2.BBIT 1102: Intro to programming"<<endl;
        cout << "\t1.BBIT 1104: Ethics"<<endl;
        break;

        case 3:
        cout << "Wed classes\n......" <<endl;
        cout << "\t1.BBIT 1106: Maths for business"<<endl;
        cout << "\t2.BBIT 1102: Theology"<<endl;
        cout << "\t3. BBIT 1102: Funamentals of IT"<<endl;
        break;

        case 4:
        cout << "Thur classes\n......" <<endl;
        cout << "\t1.BBIT 1105: Accounting"<<endl;
        cout << "\t3.BBIT 1101: Fundamentals of IT"<<endl;
        break;

        case 5:
        cout << "Fri classes\n......"<<endl;
        cout << "\t1.BBIT 1103: Business Computing"<<endl;
        break;

        default:
        cout << "Invalid Input";

    }
}
    














}
