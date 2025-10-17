#include <iostream>
using namespace std;
int main() {
    int m, n, i, j, M=0;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            cout << "Enter element at row " << i+1 << " column " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            cout << a[i][j] << " ";
            if (M<=a[i][j])
                M = a[i][j];
        }
        cout << endl;
    }
    cout << "Maximum value: " << M ;
}