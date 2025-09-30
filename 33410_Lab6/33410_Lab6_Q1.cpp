#include <iostream>
using namespace std;
const int n=10;
int main() {
    int a[n], i, s=0, in;
    for (i=0;i<n;i++) {
        cout << "Enter " << i+1 << " element: ";
        cin >> a[i];
    }
    cout << "Array: ";
    for (i=0;i<n;i++)
        cout << a[i] << " ";
    cout << "\nEnter a number: ";
    cin >> in;
    for (i=0;i<n;i++) {
        if (in==a[i])
            s++;
    }
    if (s>0)
        cout << in << " occurs " << s << " times in the above array.";
    else    
        cout << in << " does not occur in the above array.";
}