#include <iostream>
using namespace std;
int main() {
    int i, j, m, n, k=0;
    cout << "Enter number of rows and columns for a square matrix: ";
    cin >> m;
    int a[m][m], t[m][m];
    for (i=0;i<m;i++) {
        for (j=0;j<m;j++) {
            cout << "Enter an element in row " << i+1 << " column " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<m;j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Transpose of the matrix: \n";
    for (i=0;i<m;i++) {
        for (j=0;j<m;j++) {
            t[i][j] = a[j][i];
            cout << t[i][j] << "  ";
            if (t[i][j]==a[i][j])
                k++;
        }
        cout << endl;
    }
    if (k==(m*m))
        cout << "\nMatrix is symmetric.";
    else    
        cout << "\nMatrix is asymmetric.";
}