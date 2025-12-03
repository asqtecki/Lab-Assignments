#include <iostream>
using namespace std;
struct phone {
    string ac, exc, num;
};
void print(phone n) {
    cout << "(" << n.ac << ") " << n.exc << "-" << n.num;
}
int main() {
    phone p1{"212", "767", "8900"}, p2;
    string ac2, exc2, num2;
    cout << "Enter area code for your phone: ";
    cin >> ac2;
    cout << "Enter exchange for your phone: ";
    cin >> exc2;
    cout << "Enter number for your phone: ";
    cin >> num2;
    cout << endl;
    p2 = {ac2, exc2, num2};
    cout << "My phone number: ";
    print(p1);
    cout << endl;
    cout << "Your phone number: ";
    print(p2);
}