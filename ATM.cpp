#include <iostream>
using namespace std;

int main() {
    double accountBalance = 1000.0;  // Initial account balance
    double dailyWithdrawalLimit = 500.0;
    double withdrawalAmount;

//Input of withdrawal amount
    cout << "Welcome to ABSA ATM!";
    cout << "Please enter the withdrawal amount: $";
    cin >> withdrawalAmount;

    if (withdrawalAmount<=0) {
        cout << "Invalid withdrawal amount. Please enter a valid amount."<<endl;
    }
    else if (withdrawalAmount>dailyWithdrawalLimit) {
        cout << "Withdrawal amount exceeds the daily limit. Please enter a smaller amount."<<endl;
    }
    else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is $" << accountBalance << ".\n";
    } 
    else {
        // Process withdrawal
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful! Your new account balance is $" << accountBalance << ".\n";
    }

    return 0;
}
