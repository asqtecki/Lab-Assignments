#include <iostream>
using namespace std;
int mateq(int a[], int b[], int LA, int LB, int i=0) {
    if (LA != LB) return 0;
    if (i==LA) return 1;
    if (a[i] != b[i]) return 0;
    return mateq(a, b, LA, LB, i+1);
}
int main() {
    int sa, sb;
    cout << "Enter size of Array A: ";
    cin >> sa;
    cout << "Enter size of Array B: ";  
    cin >> sb;
    int a[sa], b[sb];
    int i;
    cout << "\nEnter Array A elements: \n";
    for (i=0;i<sa;i++) {
        cout << "element " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "\nEnter Array B elements: \n";
    for (i=0;i<sb;i++) {
        cout << "element " << i+1 << ": ";
        cin >> b[i];
    }
    cout << endl;
    if (mateq(a, b, sa, sb)) cout << "True: They're equal!";
    else cout << "False: They're unequal!";
}