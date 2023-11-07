#include <iostream>
#include <string>
using namespace std;
int main()
{
    int score;//switch case variable
    char grade;
    string fullname,course;
    cout << "Enter fullname"<<endl;
    getline(cin,fullname);
    cout <<"Enter course"<<endl;
    getline(cin,course);
    cout << "Enter score"<<endl;
    cin >> score;
    
    

    switch (score/10){
        case 8:
        grade ='A';
        break;

        case 7:
        grade = 'A';
        break;

        case 6:
        grade = 'B';
        break;

        case 5:
        grade = 'C';
        break;

        case 4:
        grade = 'E';
        break;

        case 3:
        grade = 'F';
        break;

        default:
        cout << "Invalid Score!ERROR!";

    
    }
    
cout<< "\n*******student Data presented*******\n";
 cout<< "Student name is "<<fullname<<endl;
 cout<< "Taking course " <<course<<endl;
 cout<< "Score is "<<score<<endl;
 cout<< "Grade is "<<grade<<endl;

 return 0;
}
    















