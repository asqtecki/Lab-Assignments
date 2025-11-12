#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int subary(int a[], int size, int i=0, int cm=0, int gm=INT_MIN) { 
    if (size==0) return 0;
    if (i==size) return gm;
    cm = max(a[i], a[i] + cm);
    gm = max(cm, gm);
    return subary(a, size, i+1, cm, gm);
}
int main() {
    int s, i;
    cout << "Enter size of array: ";
    cin >> s;
    int a[s];
    for (i=0;i<s;i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }
    cout << endl << "Array: ";
    for (i=0;i<s;i++) cout << a[i] << " ";
    cout << endl << endl;
    cout << "Maximum subarray sum is " << subary(a, s) << endl;
}
//cm = currentsum, gm = maxsum