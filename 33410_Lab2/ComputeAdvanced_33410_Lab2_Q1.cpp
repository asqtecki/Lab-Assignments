#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    if ((a+b) % (a*b) == 0)
        cout << "Thew sum is divisible by the product";
    else 
        cout << "Sum is not divisible by the product";
}