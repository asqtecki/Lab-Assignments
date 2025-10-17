#include <iostream>
using namespace std;
const int n=5;
int main() {
    int i, j, s1=0, s2=0, a1[n], a2[n];
    float m1, m2, vn, S=0, CV;
    cout << "Enter student_1 marks: " << endl;
    for (i=0;i<n;i++) {
        cout << "Enter subject " << i+1 << " marks: ";
        cin >> a1[i];
        s1 += a1[i];
    }
    cout << "\nEnter student_2 marks: " << endl;
    for (i=0;i<n;i++) {
        cout << "Enter subject " << i+1 << " marks: ";
        cin >> a2[i];
        s2 += a2[i];
    }
    m1 = (double)s1/n;
    m2 = (double)s2/n;
    for (i=0;i<n;i++) {
        vn = (a1[i]-m1)*(a2[i]-m2);
        S += vn;
    }
    CV = (double)S/(n-1);
    cout << "Covariance: " << CV;
    if (CV > 0) 
        cout << "\nBoth students tend to score high or low together.";
    else if (CV < 0)   
        cout << "\nStudents tend to score in such a way that when one scores high, the other scores low";
}