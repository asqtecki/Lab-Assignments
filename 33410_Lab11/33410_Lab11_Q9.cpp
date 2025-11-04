#include <iostream>
using namespace std;
int PowerFunction(double a, int b) {
    int i, p=1;
    for (i=1;i<=b;i++)
        p *= a;
    return p;
}
int main() {
    double x;
    int y;
    cout << "Enter base: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> y;
    cout << x << "^" << y << " = " << PowerFunction(x, y);
}