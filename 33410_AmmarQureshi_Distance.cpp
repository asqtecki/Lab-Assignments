#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y;
	cout << "Enter the x-coordinate: ";
	cin >> x;
	cout << "Enter the y-coordinate: ";
	cin >> y;
	double d = sqrt(pow((double)x, 2) + pow(y, 2));
	cout << "Distance of point (" << x << ", " << y << ") from the origin is: " << d;
}
