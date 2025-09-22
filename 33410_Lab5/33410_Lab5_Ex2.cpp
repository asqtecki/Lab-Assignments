#include <iostream>
using namespace std;
int main() {
    int n, i=1, s=0;
    cout << "Enter a number: ";
    cin >> n;
    while (n >= 0) {
        i=1;
        if (n >= 0)
            s += n;
        while (i <= n) {
            cout << "CSE141 Exam is in week 09\n";
            i++;
        }
        cout << "Enter a number: ";
        cin >> n;
    }
    cout << "Message is displayed " << s << " times!";
}