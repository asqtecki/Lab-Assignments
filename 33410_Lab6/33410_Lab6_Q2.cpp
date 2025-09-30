#include <iostream>
using namespace std;
int main() {
    double a[5], n=0.1, c;
    int i, j;
    a[0] = 3.14;
    for (i=1;i<5;i++) {
        a[i] = a[0] + n;
        n += 0.1;
    }
    cout << "Array: \n";
    for (i=0;i<5;i++)
        cout << a[i] << "  ";
    for (i=4;i>=0;i--) {
        for (j=i-1;j>=0;j--) {
            if (a[i] > a[j]) {
                c = a[j];
                a[j] = a[i];
                a[i] = c;
            }
        }   
    }
    cout << "\n\nIn descending order: \n";
    for (i=0;i<5;i++)
        cout << a[i] << "  ";
}