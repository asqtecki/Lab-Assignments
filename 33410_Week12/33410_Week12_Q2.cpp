#include <iostream>
using namespace std;
void RA(int arr[], int size) {
    int c;
    int *p1 = &arr[0], *p2 = &arr[size-1];
    while (p1<p2) {
        c = *p1;
        *p1 = *p2;
        *p2 = c;
        p1++;
        p2--;
    }
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter elements: \n";
    for (int i=0;i<n;i++) {
        cout << "element " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << endl << "Array before reversing: \n";
    for (int i=0;i<n;i++) 
        cout << *(a+i) << " ";
    RA(a, n);
    cout << endl << "Array after reversing: \n";
    for (int i=0;i<n;i++)
        cout << *(a+i) << " ";
}
