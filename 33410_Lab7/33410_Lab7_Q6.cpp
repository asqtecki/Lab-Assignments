#include <iostream>
#include <string>
using namespace std;
int main() {
    string a[5] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"}, c;
    for (int i = 1; i<5; i++) {
        c = a[i];
        int j = i-1;
        while (((j >= 0) && (a[j]) > c)) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = c;
    }
    cout << "Insertion Sort: ";
    for (int i = 0; i < 5; i++) 
        cout << a[i] << " ";
    cout << endl;
    string a2[5] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};
    for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j<5; j++)
            if (a2[j] < a2[min])
                min = j;
        c = a2[i];
        a2[i] = a2[min];
        a2[min] = c;
    }
    cout << "Selection Sort: ";
    for (int i = 0; i < 5; i++)
        cout << a2[i] << " ";
}
