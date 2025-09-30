#include <iostream>
#include <cstdlib>
#include <ctime>
const int size=6;
using namespace std;
int main() {
    double a[size], avg, s=0;
    int i;
    srand(time(0));
    cout << "Array: \n";
    for (i=0;i<size;i++) {
        a[i] = (double)rand()/RAND_MAX;
        cout << "a[" << i << "] = " << a[i] << endl;
        s += a[i];
    }
    cout << "Sum = " << s << endl << "Average = " << (double)s/size;
}