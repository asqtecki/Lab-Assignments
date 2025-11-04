#include <iostream>
using namespace std;
int SwapValues(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\nBefore Swapping:\na = " << a << ", b = " << b << endl;
    SwapValues(a, b);
    cout << "\nAfter Swapping:\na = " << a << ", b = " << b;
}