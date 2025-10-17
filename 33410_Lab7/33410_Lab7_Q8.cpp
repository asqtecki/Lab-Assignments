#include <iostream>
#include <iomanip>
using namespace std;
const int r= 5; 
const int c = 9; 
int main() {
    double obtm;
    double a[r][c];
    cout << "Enter data for " << r << " students:\n";
    for (int i = 0; i<r; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Enter Student ID: ";
        cin >> a[i][0];
        for (int j = 1; j <= 5; j++) {
            cout << "Enter marks for Course " << j << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        a[i][6] = 500;
        obtm= 0;

        for (int j = 1; j <= 5; j++) {
            obtm += a[i][j];
        }

        a[i][7] = obtm;
        a[i][8] = ((double)obtm/a[i][6])*100;
    }
    cout << left << setw(15) << "StdID" << setw(15) << "C1m" << setw(15) << "C2m" << setw(15) << "C3m" << setw(15) << "C4m" << setw(15) << "C5m" << setw(15) << "Total" << setw(15) << "Obtained" << setw(15) << "Percent" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << setw(15) << fixed << setprecision(2) << a[i][j];
        }
        cout << endl;
    }
}
