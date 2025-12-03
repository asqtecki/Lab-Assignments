#include <iostream>
using namespace std;
struct course {
    string name, cor[100];
    double gpa[100];
};
struct address {
    string street, city, state;
    int zip;
};
struct student: course, address {
    double cgpa;
};
void input(student &n, int c) {
    cout << "Enter name: ";
    cin >> n.name;
    cout << "Enter overall CGPA: ";
    cin >> n.cgpa;
    cout << "\nEnter course details: \n";
    for (int i=0;i<c;i++) {
        cout << "Course " << i+1 << " name: ";
        cin >> n.cor[i];
        cout << "Enter gpa: ";
        cin >> n.gpa[i];
    }
    cout << endl << "Address details: \n";
    cout << "Enter street: ";
    cin >> n.street;
    cout << "Enter city: ";
    cin >> n.city;
    cout << "Enter state: ";
    cin >> n.state;
    cout << "Enter zip: ";
    cin >> n.zip;
}
void compare(student n1, student n2, int c) {
    cout << "Course Comparison: \n";
    for (int i=0;i<c;i++) {
        cout << n1.cor[i] << " --> ";
        if (n1.gpa[i] > n2.gpa[i]) cout << "Student 1 has a higher GPA of " << n1.gpa[i];
        else if (n1.gpa[i] < n2.gpa[i]) cout << "Student 2 has a higher GPA of " << n2.gpa[i];
        else cout << "Both have an equal GPA of " << n1.gpa[i];
        cout << endl;
    }
    cout << endl << "Overall CGPA Comparison: \n";
    if (n1.cgpa > n2.cgpa) cout << "Student 1 has a higher overall CGPA of " << n1.cgpa;
    else if (n1.cgpa < n2.cgpa) cout << "Student 2 has a higher overall CGPA of " << n2.cgpa;
    else cout << "Both have an equal overall CGPA of " << n1.cgpa;
}
int main() {
    student s1, s2;
    int c;
    cout << "Enter number of courses: ";
    cin >> c;
    cout << endl << "Enter details for student 1: \n";
    input(s1, c);
    cout << endl << "Enter details for student 2: \n";
    input(s2, c);
    cout << "\nComparing... \n";
    compare(s1, s2, c);
}