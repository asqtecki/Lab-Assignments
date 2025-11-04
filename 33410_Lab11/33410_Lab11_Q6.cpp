#include <iostream>
using namespace std;
double VolumeCalc(double a, double h) {
    return (a*a) * (h/3.0);
}
double getData() {
    double a, h;
    cout << "Input base length: ";
    cin >> a;
    cout << "Input height: ";
    cin >> h;
    return VolumeCalc(a, h);
}
int main() {
    cout << "Volume of the shape: " << getData();
}