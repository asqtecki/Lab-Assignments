#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "3a + 7b - 5c = 10" << endl << endl;
    cout << "The integer roots for given problem are: " << endl;
    for (a=-10;a<=10;a++) {
        for (b=-10;b<=10;b++) {
            for (c=-10;c<=10;c++) {
                if (3*a + 7*b - 5*c == 10)
                    cout << "Solution: \ta = " << a << "\t\tb = " << b << "\t\tc = " << c << endl; 
            }
        }
    }
}