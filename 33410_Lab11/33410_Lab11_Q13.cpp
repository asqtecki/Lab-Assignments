#include <iostream>
using namespace std;
int UpdateMarks(int &m) {
    m += 10;
}
int main() {
    int n;
    cout << "Enter marks: ";
    cin >> n;
    UpdateMarks(n);
    cout << "Updated marks: " << n;
}