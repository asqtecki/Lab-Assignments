#include <iostream>
#include <vector>
using namespace std;
void VectorReverse(int s) {
    vector<int> a;
    int e, i;
    cout << "Enter " << s << " numbers: ";
    for (i=0;i<s;i++) {
        cin >> e;
        a.push_back(e);
    }
    cout << "Reversed vector: ";
    
    for (i=s-1;i>=0;i--)
        cout << a[i] << " ";
}
int main() {
    int s;
    cout << "Enter size of vector: ";
    cin >> s;
    VectorReverse(s);
}