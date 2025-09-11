#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, a=0, b=1, c, i;
    cout << "Enter desired number of terms: ";
    cin >> n;
    cout << a << " " << b << " ";
    if (n>=2) {
        for (i=1;i<=n-2;i++) {
            c = a+b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
}