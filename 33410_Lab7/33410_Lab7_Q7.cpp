#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int emp = 4; 
    const int prod = 6;   
    double sales[prod][emp];
    double prodTotal[prod] = {0}, empTotal[emp] = {0};

    cout << "Enter sales data (Product x Employee):\n";
    for (int i = 0; i < prod; i++) {
        for (int j = 0; j < emp; j++) {
            cout << "Product " << i + 1 << ", Employee " << j + 1 << " sales: ";
            cin >> sales[i][j];
        }
    }
    for (int i = 0; i < prod; i++) {
        for (int j = 0; j < emp; j++) {
            prodTotal[i] += sales[i][j];  
            empTotal[j] += sales[i][j];    
        }
    }
    cout << setw(10) << "Product";
    for (int j = 0; j < emp; j++)
        cout << setw(12) << "Emp" << j + 1;
    cout << setw(15) << "Total(Product)\n";

    // Display sales per product
    for (int i = 0; i < prod; i++) {
        cout << setw(10) << "P" << i + 1;
        for (int j = 0; j < emp; j++)
            cout << setw(12) << fixed << setprecision(2) << sales[i][j];
        cout << setw(15) << fixed << setprecision(2) << prodTotal[i] << endl;
    }
    cout << setw(10) << "Total:";
    for (int j = 0; j < emp; j++)
        cout << setw(12) << fixed << setprecision(2) << empTotal[j];
}
