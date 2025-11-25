#include <iostream>
using namespace std;
int* mergeArrays(int *a, int sizeA, int *b, int sizeB) {
    int *c = new int[sizeA + sizeB];
    for (int i=0;i<sizeA;i++)
        *(c+i) = *(a+i);
    for (int i=0;i<sizeB;i++)
        *(c+sizeA+i) = *(b+i);
        return c;
}
int main() {
    int sa, sb;
    cout << "Enter size of array A: ";
    cin >> sa;
    int *a = new int[sa];
    cout << "Enter elements to Array A: \n";
    for (int i=0;i<sa;i++) {
        cout << "element " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << endl;
    cout << "Enter size of array B: ";
    cin >> sb;
    int *b = new int[sb];
    cout << "Enter elements to Array B: \n";
    for (int i=0;i<sb;i++) {
        cout << "element " << i+1 << ": ";
        cin >> *(b+i);
    }
    int *pa = a, *pb = b;
    int *pc = mergeArrays(pa, sa, pb, sb);
    cout << endl << "Merged Arrays: \n";
    for (int i=0;i<(sa+sb);i++)
        cout << *(pc+i) << " ";
}