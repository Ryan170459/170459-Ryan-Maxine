#include <iostream>
#include <string>
#include "Functions.h"

int main(){
    double val1, val2;
    cout<<"Enter two numbers to see their division"<<endl;
    cin>>val1;
    cout<<"Enter second number"<<endl;
    cin>>val2;
    cout<<"Division of"<<val1<<"and"<<val2<<"is"<<division(val1,val2);
    return 0;
}