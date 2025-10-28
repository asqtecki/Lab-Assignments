#include <iostream>
using namespace std;
void magics(int k[3][3]) {
    int r1=0, r2=0, r3=0, c1=0, c2=0, c3=0, d1=0, d2=0;
    int i, j;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) 
            cout << k[i][j] << " ";
        cout << endl;
    }
    for (i=0;i<3;i++) {
        c1 += k[i][0];
        c2 += k[i][1];
        c3 += k[i][2];
    }
    for (j=0;j<3;j++) {
        r1 += k[0][j];
        r2 += k[1][j];
        r3 += k[2][j];
    }
    for (i=0;i<3;i++) {
        d1 += k[i][i];
        d2 += k[i][2-i];
    }
    if ((c1==c2)&&(c1==c3)&&(c1==r1)&&(c1==r2)&&(c1==r3)&&(c1==d1)&&(c1==d2))
        cout << "\nMagic Square: true";
    else
        cout << "\nMagic Square: false";
}
int main() {
    int a[3][3];
    int i, j;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            cout << "Enter row " << i+1 << " column " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    magics(a);
}