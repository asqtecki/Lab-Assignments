#include <iostream>
#include <conio.h>
using namespace std;
void DisplayChars(int n, char c) {
    int i;
    for (i=1;i<=n;i++)
        cout << c;
}
int main() {
    int x;
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter number of times to display it: ";
    cin >> x;
    DisplayChars(x, c);
}