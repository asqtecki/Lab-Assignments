#include <iostream>
using namespace std;
float* SumAll(float *a, int size) {
    float *s=new float(0);
    for (int i=0;i<size;i++) {
        *s += *(a+i);
    }
    return s;
}
int main() {
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    float *a = new float[s];
    cout << "Enter the elements of the array: \n";
    for (int i=0;i<s;i++) { 
        cout << "Element " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << "Sum of all elements: " << *SumAll(a, s);
}