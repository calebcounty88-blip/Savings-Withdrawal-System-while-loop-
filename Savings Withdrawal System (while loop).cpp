#include <iostream>
using namespace std;
int main() {
    double accountBalance;
    double withdrawalAmount;
    cout << "Enter initial account balance: ";
    cin >> accountBalance;
    while (accountBalance > 0) {
        cout << "\nCurrent balance: " <<endl;
		cin>>accountBalance;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawalAmount;
        if (withdrawalAmount > accountBalance) {
            cout << "Insufficient funds." << endl;
            break;
        }
        if (withdrawalAmount<= 0) {
            cout << "Invalid amount." << endl;
            continue;
        }
        accountBalance=accountBalance-withdrawalAmount;
        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance: " << accountBalance << endl;

        if (accountBalance == 0) {
            cout << "Balance is zero. No further withdrawals possible." << endl;
            break;
        }
    }

    return 0;
}