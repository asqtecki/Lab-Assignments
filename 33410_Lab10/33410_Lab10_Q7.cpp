#include <iostream>
using namespace std;
void LR() {
    int n, c=1, pr, ln, lc=1;
    bool f=1;
    cout << "Enter integers(Enter a character to stop): ";
    while (cin >> n) {
        if (f) {
            pr = n;
            ln = n;
            f=0;
        }
        else if (n==pr)
            c++;
        else
            c=1;
        if (c > lc) {
            lc = c;
            ln = n;
        }
        pr = n;
    }
    cout << "Longest Run: " << lc << " consecutive " << ln << "s"; 
}
int main() {
    LR();
}