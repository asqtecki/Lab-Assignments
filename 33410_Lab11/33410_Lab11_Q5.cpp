#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void CountFrequency() {
    int n, i, c, val, j;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    bool f[n] = {false};
    srand(time(0));
    for (i=0;i<n;i++) {
        a[i] = rand() % 11;
        cout << a[i] << " ";
    }
    cout << endl;
    for (i=0;i<n;i++) {
        if (!f[i]) {
            val = a[i];
            c=0;
            for (j=0;j<n;j++) {
                if (a[j] == val) {
                    c++;
                    f[j] = true;
                }
            }
            cout << val << " -> ";
            if (c>0) {
                if (c==1)
                    cout << c << " time";
                else
                    cout << c << " times";
            }
            f[i] = true;
            cout << endl;
        }
    }
}
int main() {
    CountFrequency();
}