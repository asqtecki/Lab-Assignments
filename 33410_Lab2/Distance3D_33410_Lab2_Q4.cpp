#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x, y, z;
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;
    cout << "Enter z-coordinate: ";
    cin >> z;
    cout << "Distance of point (" << x << ", " << y << ", " << z << ") to (0, 0, 0) is: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}