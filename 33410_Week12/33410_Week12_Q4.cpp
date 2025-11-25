#include <iostream>
using namespace std;
int CountEven(int arr[], int size) {
    int *p = arr, c=0;
    for (int i=0;i<size;i++) {
        if (*p%2==0) c++;
        p++;
    }
    return c;
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter elements: \n";
    for (int i=0;i<n;i++) {
        cout << "Element: " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << "Number of even values: " << CountEven(a, n);
}