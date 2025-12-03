#include <iostream>
using namespace std;
void input(int a[][100], int n) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << "row " << i+1 << " column " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
}
void display(int a[][100], int n) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
void mul(int a[][100], int b[][100], int c[][100], int n, int i=0, int j=0, int k=0) {
    if (i==n) return;
    if (j<n) {
        if (k<n) {
            c[i][j] += a[i][k] * b[k][j];
            mul(a, b, c, n, i, j, k+1);
        }
        else mul(a, b, c, n, i, j+1, 0);
    }
    else mul(a, b, c, n, i+1, 0, 0);
}
int main() {
    int n;
    cout << "Enter number of rows and columns for both matrices: ";
    cin >> n;
    int a[n][100], b[n][100], c[n][100] = {0}; //c = a x b
    cout << "Enter Matrix A: \n";
    input(a, n);
    cout << endl;
    cout << "Enter Matrix B: \n";
    input(b, n);
    cout << endl;
    cout << "Matrix A: \n";
    display(a, n);
    cout << endl << "Matrix B: \n";
    display(b, n);
    cout << endl << "Matrix C = A x B: \n";
    mul(a, b, c, n);
    display(c, n);
}