#include <iostream>
using namespace std;
int main() {
    int a, b, i=1;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < 0 || b < 0)
        return 0;
    while (a != b) {
        a = a>>2;
        b *= b;
        cout << "First number: " << a << endl << "Second number: " << b << endl << endl;
    }
    cout << "Numbers are equal!";
} 