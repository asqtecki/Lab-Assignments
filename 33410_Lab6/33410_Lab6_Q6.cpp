#include <iostream>
using namespace std;
const int S= 5;
int main() {
    double a1[S], a2[S], used[S];
    int i, j, k = 0, u = 0, x;
    bool F;
    cout << "Array 1:\n";
    for (i = 0; i < S; i++) {
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> a1[i];
    }
    cout << "\nArray 2:\n";
    j=6;
    for (i = 0; i < S; i++) {
        cout << "Enter marks for student " << j << ": ";
        cin >> a2[i];
        j++;
    }
    cout << "\nCommon values are:\n";
    for (i = 0; i < S; i++) {
        for (j = 0; j < S; j++) {
            if (a1[i] == a2[j]) {
                F = 0;
                for (x = 0; x < u; x++) {
                    if (used[x] == a1[i]) {
                        F = true;
                        break;
                    }
                }
                if (!F) {
                    cout << a1[i] << endl;
                    used[u++] = a1[i];
                    k++;
                }
            }
        }
    }
    if (k == 0)
        cout << "No common values!";
}
