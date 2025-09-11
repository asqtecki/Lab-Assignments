#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;
    if ((x==0) && (y==0))
        cout << "Point (" << x << ", " << y << ") lies on the origin";
    else if (x==0) 
        cout << "Point (" << x << ", " << y << ") lies on the y-axis";
    else if (y==0)
        cout << "Point (" << x << ", " << y << ") lies on the x-axis";
    else if ((x>0) && (y>0))
        cout << "Point (" << x << ", " << y << ") lies in Quadrant I";
    else if ((x<0) && (y>0))
        cout << "Point (" << x << ", " << y << ") lies in Quadrant II";
    else if ((x<0) && (y<0))
        cout << "Point (" << x << ", " << y << ") lies in Quadrant III";
    else if ((x>0) && (y<0))
        cout << "Point (" << x << ", " << y << ") lies in Quadrant IV";
    else   
        cout << "invalid input";
}