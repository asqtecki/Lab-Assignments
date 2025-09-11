#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
    double a, b, c, d, e;
    a = (double)rand()/RAND_MAX;
    b = (double)rand()/RAND_MAX;
    c = (double)rand()/RAND_MAX;
    d = (double)rand()/RAND_MAX;
    e = (double)rand()/RAND_MAX;
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << endl;
    cout << "Average = " << (a+b+c+d+e)/5.0 << endl;
    cout << "Maximum = " << max({a, b, c, d, e}) << endl;
    cout << "Minimum = " << min({a, b, c, d, e});
}