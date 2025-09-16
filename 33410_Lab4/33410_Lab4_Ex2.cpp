#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    if ((a==b) && (a==c))
        cout << "Triangle is equilateral";
    else if((a==b) || (a==c))
        cout << "Triangle is isosceles";
    else 
        cout << "Triangle is scalene";
}