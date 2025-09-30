#include <iostream>
using namespace std;
int main() {
    int n, s, c, num=0;
    cout << "Enter atleast 4 digit number: ";
    cin >> n;
    if (n<1000) {
        cout << "Number has less than 4 digits!!";
        return 0;
    }
    c = n;
    while (c>0) {
        c /= 10;
        num++;
    }
    while (n>=10) {
        s=0;
        c = n;
        while (c>0) {
            s += c%10;
            c /= 10;
        }
        n = s;
    }
    cout << "\nNumber of digits: " << num << endl;
    cout << "Digital root: " << n;
}