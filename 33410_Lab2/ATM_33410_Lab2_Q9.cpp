#include <iostream>
using namespace std;
int main() {
    int n;
    int bal=4500, dep, with;
    cout << "ATM....\n";
    cout << "1. To deposit money\n";
    cout << "2. To Withdraw money\n";
    cout << "3. To check balance\n";
    cout << "Enter a number: ";
    cin >> n;
    if (n==1) {
        cout << "Enter amount to deposit: ";
        cin >> dep;
        bal += dep;
        cout << "Your new balance: " << bal;
    }
    else if (n==2) {
        cout << "Enter amount to withdraw: ";
        cin >> with;
        if (with <= bal) {
            cout << "Successfully withdrawn!\n";
            bal -= with;
            cout << "Your new bank balance: " << bal;
        }
        else
            cout << "Not enough amount to withdraw!";
    }
    else if (n==3)
        cout << "Balance: " << bal;
    else   
        cout << "Invalid Input!";
}