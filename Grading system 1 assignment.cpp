#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Declare variables to store user input
    string fullname;
    cout << "Please enter fullname";//User to input fullname
    getline (cin,fullname);

    string course;
    cout << "Please enter course";//user to input course
    getline (cin,course);

    int score;
    cout << "Input score";//User to input score
    (cin>>score);

    if (score>=70) {
            cout << "Grade A,BRAVO!";
        }

        else if (score>=60 && score<=69){
            cout << "Grade B,Good work";
        }

        else if (score>=50 && score<=59){
            cout << "Grade C,More than your potential";
        }

        else if (score>=40 && score<=49){
            cout << "Grade D,Pull up";
        }

        else if (score<=40){
            cout << "Grade F,Be serious";
        }

        else{
            cout << "Invalid score";
        }

        return 0;
 }


