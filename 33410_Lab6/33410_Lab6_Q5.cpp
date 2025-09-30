#include <iostream>
using namespace std;
const int S=10;
int main() {
    int i, pc=0, fc=0;
    double ps=0, fs=0, m, p[S], f[S];
    for (i=0;i<S;i++) {
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> m;
        if (m==-1)
            break;
        if ((m>=5)&&(m<=10)) {
            p[pc++] = m;
            ps += m;
        }
        else if ((m>=0)&&(m<5)) {
            f[fc++] = m;
            fs += m;
        }
    }
    cout << "\n\nArray 1: ";
    for (i=0;i<pc;i++)
        cout << "|| " << p[i] << " ";
    cout << "||\n\nArray 2: ";
    for (i=0;i<fc;i++) 
        cout << "|| " << f[i] << " ";
    cout << "||\n\n";
    if (pc>0)
        cout << "Average of Array 1: " << ps/(double)pc << endl;
    if (fc>0)
        cout << "Average of Array 2: " << fs/(double)fc << endl;
    cout << "\nPass: " << pc << endl;
    cout << "Fail: " << fc;
}