#include <iostream>
using namespace std;
bool search(int n[], int size, int target, int i=0) {
    if (n[i]==target) return 1;
    if (i==size) return 0;
    return search(n, size, target, i+1);
}
int main() {
    int s, tar;
    cout << "Enter size of array: ";
    cin >> s;
    int *a = new int[s];
    cout << "Enter elements: \n";
    for (int i=0;i<s;i++) {
        cout << i+1 << " element: ";
        cin >> *(a+i);
    }
    cout << endl;
    cout << "Enter a target number: ";
    cin >> tar;
    if (search(a, s, tar)) cout << tar << " found!";
    else cout << tar << " not found!";
}