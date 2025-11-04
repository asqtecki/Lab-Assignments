#include <iostream>
#include <vector>
using namespace std;
int VectorSum(vector<int>& a) {
    int s = 0, i;
    for (i=0;i<a.size();i++)
        s += a[i];
    return s;
}
int main() {
    int s, e, i;
    vector<int> a;
    cout << "Enter count: ";
    cin >> s;
    cout << "Enter " << s << " numbers: ";
    for (i = 0; i < s; i++) {
        cin >> e;
        a.push_back(e);
    }
    cout << "Sum: " << VectorSum(a);
}