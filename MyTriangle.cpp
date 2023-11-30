#include <iostream>
#include <string>
#include "Functions.h"

int main(){
    double base, height;
    //Triangle 1
    do {
    cout<<"Enter values for triangle  are"<<endl;
    cout<<"Enter base of triangle"<<endl;
    cin>>base;
    cout<<"Enter height of triangle"<<endl;
    cin>>height;
    cout<<"Area of triangle  is:"<<MyTriangle(base,height)<<endl;}

    while(base>0,height>0);

    return 0;
}