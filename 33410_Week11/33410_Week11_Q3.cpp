#include <iostream>
using namespace std;
float* findmax(float *a, int size) {
    float *max = new float(a[0]);
    float *max2 = new float(a[0]);
    if (a[1]>a[0]) {
        *max = a[1];
        *max2 = a[0];
    }
    else {
        *max2 = a[1];
        *max = a[0];
    }
    for (int i=2;i<size;i++) {
        if (*(a+i)>*max) {
            *max2 = *max;
            *max = *(a+i);
        }
        else if (*(a+i)>*max2 && *(a + i)!=*max) *max2 = *(a + i);
    }
    return max2;
}
int main() {
    int s=4;
    float *a = new float[s];
    cout << "Enter elements: \n";
    for (int i=0;i<s;i++) {
        cout << "Element " << i+1 << ": ";
        cin >> *(a+i);
    }
    float *res = findmax(a, s);
    cout << "Second highest value in the array: " << *res;
}