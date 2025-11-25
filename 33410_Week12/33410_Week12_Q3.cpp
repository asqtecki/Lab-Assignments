#include <iostream>
using namespace std;
void update(float *ptr) {
    cout << "Enter a number: ";
    cin >> *ptr;
    cout << "Value: " << *ptr;
    cout << "\nAddress: " << ptr;
    cout << "\nUpdated value: " << *ptr+10.0;
}
int main() {
    float *p = new float;
    update(p);
}