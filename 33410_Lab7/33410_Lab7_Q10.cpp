#include <iostream>
using namespace std;
const int n=8;
int main() {
    int i;
    double len[n] = {150.6, 354, 172.23, 73.33, 415.15, 415.15, 415.15, 415.15};
    double wid[n] = {126.9, 451.51, 75.65, 707.17, 116.17, 116.17, 116.17, 116.17};
    double A[n], lenm[1], widm[1];
    double M=0;
    for (i=0;i<n;i++) {
        A[i] = len[i]*wid[i];
    }
    for (i=0;i<n;i++) {
        if (M<=A[i]) {
            M = A[i];
            lenm[0] = len[i];
            widm[0] = wid[i];
        }
    }
    cout << "The largest land has dimensions: \n";
    cout << "Length: " << lenm[0] << ", Width: " << widm[0] << "\nArea: " << M;
}