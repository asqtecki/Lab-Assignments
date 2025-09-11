#include <iostream>
using namespace std;
int main() {
    int n, i, j=0;
    cout << "Enter a number: ";
    cin >> n;
    if (n==1)
        cout << n << " is neither PRIME nor COMPOSITE.";
    for (i=1;i<=n;i++) {
        if (n%i==0)
            j++;
    }
    if (j==2)
        cout << n << " is a PRIME NUMBER.\n";
    else   
        cout << n << " is a COMPOSITE NUMBER.";
    cout << "\nPrime numbers between 1 and 100\n";
    for (n=1;n<=100;n++) {
        j=0;
        for (i=1;i<=n;i++) {
            if (n%i==0)
                j++;
        }
        if (j==2)
            cout << n << " ";
    }
}