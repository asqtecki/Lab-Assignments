#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n1, n2, p, cor=0, wro=0;
    while (1) {
        n1 = (rand()%10)+1;
        n2 = (rand()%10)+1;
        int smaller =(n1<n2) ? n1:n2;
        int larger =(n1<n2) ? n2: n1;
        cout << smaller << " x " << larger << " = ";
        cin >> p;
        if (p==-1)
            break;
        if (p==(n1*n2)) {
            cout << "Correct!\n";
            cor++;
        }
        else {
            cout << "Wrong!\n";
            cout << "Answer = " << n1*n2 << endl;
            wro++;
        }
    }
    cout << "\nFails = " << wro << endl << "Pass = " << cor;
}