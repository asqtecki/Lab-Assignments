#include <iostream>
using namespace std;
void transpose(int a[3][4]) {
    int i, j, a2[4][3];
    for (i=0;i<4;i++) {
        for (j=0;j<3;j++) {
            a2[i][j] = a[j][i];
        }
    }
    for (i=0;i<4;i++) {
        for (j=0;j<3;j++) 
            cout << a2[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int k[3][4], i, j;
    cout << "Enter array elements: \n";
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) {
            cout << "Enter row " << i+1 << " column " << j+1 << " element: ";
            cin >> k[i][j];
        }
    }
    cout << endl << "Input Matrix(3x4): \n";
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) 
            cout << k[i][j] << " ";
        cout << endl;
    }
    cout << "Output Matrix: \n";
    transpose(k);
}