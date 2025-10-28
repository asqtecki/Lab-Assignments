#include <iostream>
using namespace std;
void addm(int a1[3][4], int a2[3][4]) {
    int i, j;
    cout << "Matrix A: \n";
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++)
            cout << a1[i][j] << " ";
        cout << endl;
    }
    cout << "Matrix B: \n";
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++)
           cout << a2[i][j] << " ";
        cout << endl;
    }
    cout << "\nResultant matrix: A + B \n";
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++)
            cout << a1[i][j] + a2[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int a[3][4] = {{2, 5, 7, 1}, {1, 3, 6, 1}, {5, 4, 1, 3}};
    int b[3][4] = {{1, 9, 5, 0}, {7, 1, 5, 4}, {3, 4, 2, 8}};
    addm(a, b);
}