#include <iostream>
using namespace std;
void sumcol(int k[3][3]) {
    int n, i, j, s=0;
    cout << endl << "Matrix: \n";
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) 
            cout << k[i][j] << " ";
        cout << endl;
    }
    cout << "Enter column: ";
    cin >> n;
    for (i=0;i<3;i++) 
        s += k[i][n-1];
    cout << "\nSum: " << s;
} 
int main() {
    int a[3][3], i, j;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            cout << "Enter row " << i+1 << " column " << j+1 << " value: ";
            cin >> a[i][j];
        }
    }
    sumcol(a);
}