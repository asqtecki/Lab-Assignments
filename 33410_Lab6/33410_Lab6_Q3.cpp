#include <iostream>
using namespace std;
const int size=6;
int main() {
    int a[size];
    bool c = 1;
    for (int i = 0; i < size; i++) {
        cout << "Enter " << i+1 << " element: ";
        cin >> a[i];
    }
    for (int i = 0; i < size / 2; i++) {
        if (a[i] != a[size - 1 - i]) {
            c=0;
            break;
        }
    }

    if (c==1)
        cout << "Array is Symmetric!";
    else
        cout << "Array is Non-symmetric!";
}