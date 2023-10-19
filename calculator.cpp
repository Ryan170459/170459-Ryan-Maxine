#include <iostream>
using namespace std;

int main()
{
double sum = 0.0;
int count;
cout << "Enter the number of contracts to add: ";
cin >> count;
}

for (int i=0; i < count; i++)
{
double contract;
cout << "Enter contract " << (i + 1) <<": ";
cin >> contract;
sum+= contract;
}

double divisor;
cout << "Enter the number to divide the sum by: ";
cin >> divisor;

{
if (divisor != 0)
{
    double result = sum / divisor;
    cout << "Result: " << result << endl;
}else

{
    cout << "Error: Division by zero is not allowed." << endl;
}

return 0;
}