#include <iostream>
using namespace std;
int main() {
    int i, j, k=0, m, n;
    float C;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    C=(m*n)/2.0;
    int a[m][n];
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            cout << "Enter an element at row " << i+1 << " column " << j+1 << ": ";
            cin >> a[i][j];
            if (a[i][j]==0)
                k++;
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    if (k>=C)
        cout << "The Matrix is a sparse matrix!";
    else   
        cout << "The Matrix is not a sparse matrix!";
}