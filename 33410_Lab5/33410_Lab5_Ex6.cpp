#include <iostream>
using namespace std;
int main() {
    float sum1=0, sum2=0, sum3=0, cse, csel, cse5, i, S=0;
    for (i=1;i<=10;i++) {
        cout << "\nEnter " << i << " student's CSE141 marks: ";
        cin >> cse;
        sum1 += cse;
        cout << "Enter " << i << " student's CSE141-Lab marks: ";
        cin >> csel;
        sum2 += csel;
        cout << "Enter " << i << " student's CSE578 marks: ";
        cin >> cse5;
        sum3 += cse5;
    }
    S= sum1 + sum2 + sum3;
    cout << "\nAverage of CSE141 Marks: " << (float)sum1/10.0 << endl;
    cout << "Average of CSE141-Lab Marks: " << (float)sum2/10.0 << endl;
    cout << "Average of CSE578 Marks: " << (float)sum3/10.0 << endl;
    cout << "Average grade of all courses: " << (float)S/30.0;
}