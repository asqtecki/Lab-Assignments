#include <iostream>
using namespace std;
int SumOfCubes(int n) {
    int i, s=0;
    for (i=1;i<=n;i++)
        s += i*i*i;
    return s;
}
int main() {
    int x;
    cout << "Enter a number (0-1000): ";
    cin >> x;
    if (x<0 || x>1000) {
        cout << "Please enter valid inputs!";
    return 0;
    }
    cout << "Sum of cubes till the cube of '" << x << "': ";
    cout << SumOfCubes(x);
}