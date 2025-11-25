#include <iostream>
using namespace std;
int* max(int arr[], int size) {
    int *m = &arr[0];
    for (int i=0;i<size;i++) {
        if (*m<=arr[i]) m = &arr[i];
    }
    return m;
}
int main() {
    int s;
    cout << "Enter size of the array: ";
    cin >> s;
    int *a = new int[s];
    cout << "Enter elements: \n";
    for (int i=0;i<s;i++) {
        cout << "element " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << "Maximum value: " << *max(a, s);
}