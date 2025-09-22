#include <iostream>
using namespace std;
int main() {
    int pos=0, neg=0, hd=0, n;
    cout << "Enter a number: ";
    cin >> n;
    do {
        if (n%2!=0)
            cout << "Square of the given number: " << n*n << endl;
        if (n > 0)
            pos++;
        else if (n<0)
            neg++;
        if (n >= 100 && n <= 200)
            hd++;
        cout << "Enter a number: ";
        cin >> n;
    }
    while (n<15 || n>25);
    if (n>=15 && n<=25)
        pos++;
    cout << "Positive numbers: " << pos << endl << "Negative numbers: " << neg << endl << "Total count of [100-200]: " << hd;
}