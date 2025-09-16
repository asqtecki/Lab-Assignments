#include <iostream>
using namespace std;
int main() {
    int n, ch, ld, i=1;
    cout << "Enter a number: ";
    cin >> n;
    if (n==0) {
        cout << "Number is divisible by 7";
        return 0;
    }
    while (i <= 1000) {
        i++;
        ld = n % 10;
        n /= 10;
        n -= (2*ld);
        if ((n == 7) || (n == -7) || (n==0)) {
            cout << "Number is divisible by 7.";
            break;
        }
        else 
            continue;
    }
    if ((n!=0)&&(n!=7)&&(n!=-7))
        cout << "Number is not divisible by 7.";
} 