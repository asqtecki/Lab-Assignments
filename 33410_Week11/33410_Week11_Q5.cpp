#include <iostream>
using namespace std;
void SortFunction(int *arr, int *size, int order) {
    int k;
    if (order==1) {
        cout << "Sorted in Ascending order: \n";
        for (int i=0;i<*size;i++) {
            for (int j=0;j<*size-1;j++) {
                if (arr[j]>=arr[j+1]) {
                    k = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = k;
                }
            }
        }
        for (int i=0;i<*size;i++)
            cout << arr[i] << " ";
    }
    else if (order==2) {
        cout << "Sorted in Descending order: \n";
        for (int i=0;i<*size;i++) {
            for (int j=0;j<*size-1;j++) {
                if (arr[j]<=arr[j+1]) {
                    k = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = k;
                }
            }
        }
        for (int i=0;i<*size;i++)
            cout << arr[i] << " ";
    }
    else
        cout << "Invalid Input!";
}
int main() {
    int s, o;
    cout << "Enter size of array: ";
    cin >> s;
    int *a = new int[s];
    cout << "Enter elements of the array: \n";
    for (int i=0;i<s;i++) {
        cout << "Element " << i+1 << ": ";
        cin >> *(a+i);
    }
    cout << "Enter order you want to arrange in(1 for Ascending/2 for Descending): ";
    cin >> o;
    SortFunction(a, &s, o);
}