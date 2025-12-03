#include <iostream>
using namespace std;
struct student {
    int erp;
    string name;
    double cgpa;
};
void input(student &n) {
    cin.ignore();
    cout << "Enter student's name: ";
    getline(cin, n.name);
    cout << "Enter student's ERP: ";
    cin >> n.erp;
    cin.ignore();
    cout << "Enter student's CGPA: ";
    cin >> n.cgpa; 
}
void display(student s[], int n, int i=0) {
    if (i==n) return;
    cout << "Student name: " << s[i].name;
    cout << "\nStudent ERP: " << s[i].erp;
    cout << "\nStudent CGPA: " << s[i].cgpa;
    cout << endl << endl;
    display(s, n, i+1);
}
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cout << endl;
    student s[n];
    cout << "Enter details: \n\n";
    for (int i=0;i<n;i++) {
        cout << "Student " << i+1 << " information: \n";
        input(s[i]);
        cout << endl;
    }
    cout << "Student Information: \n\n";
    display(s, n);
} 