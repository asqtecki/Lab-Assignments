#include <iostream>
using namespace std;
void SwapPointers(int *&p1, int *&p2) {
    int *c = p1;
    p1 = p2;
    p2 = c;
}
int main() {
    int a=5, b=10;
    int *pa = &a, *pb = &b;
    cout << "Before Swapping: \n";
    cout << "Pointer A: " << pa << ", Pointer B: " << pb;
    SwapPointers(pa, pb);
    cout << "\n\nAfter Swapping: \n";
    cout << "Pointer A: " << pa << ", Pointer B: " << pb;
}