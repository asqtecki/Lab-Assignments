#include <iostream>
using namespace std;
int main() {
    double avg;
    int s=0, i, j, n, k=0;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    for (i=0;i<n;i++) {
        cout << "Enter " << i+1 << " value: ";
        cin >> a[i];
        if (a[i]>0) { //+ve nums only
            s += a[i];
            k++;
        }
    }
    avg = (double)s/k;
    cout << "Sum of all numbers: " << s << endl << "Average of all positive numbers: " << avg;
}