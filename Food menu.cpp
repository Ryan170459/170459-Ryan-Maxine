#include <iostream>
using namespace std;
int main() {
    int choice;
    int foodcost,beveragecost,desertcost;
    int totalcost;
//Customer to select prefered meal
    cout << "Welcome to Blake Restaurant!"<<endl;
    cout << "CUSTOMER MENU:"<<endl;
    cout << "1.Chips chicken"<<endl;
    cout << "2. Vegetable salad"<<endl;
    cout << "3. Beef Steak"<<endl;
    cout << "Select your meal";
    cin >> choice;

// Introducing switch case to input cost of food,beverage and desert for each meal selected
switch (choice){
    case 1:
    cout << "Chips Chicken selected"<<endl;
    foodcost = 55;
    beveragecost = 35;
    desertcost = 25;
    break;

    case 2:
    cout << "Vegetable Salad selected"<<endl;
    foodcost = 50;
    beveragecost = 40;
    desertcost = 30;
    break;

    case 3:
    cout << "Beef Steak selected"<<endl;
    foodcost = 70;
    beveragecost = 60;
    desertcost = 50;
    break;

    default:
    cout << "Invalid selection.Try Again"<<endl;

    return 0;
}
//Determining total cost of the meal selected
totalcost =foodcost + beveragecost + desertcost;
cout << "Food cost is: $"<<foodcost<<endl;
cout << "Beverage cost is: $"<<beveragecost<<endl;
cout << "Desert cost is: $"<<desertcost<<endl;

return 0;

}