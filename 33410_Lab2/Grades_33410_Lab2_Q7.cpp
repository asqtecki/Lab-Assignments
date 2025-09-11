#include <iostream>
using namespace std;
int main() {
    float s1, s2, s3, s4, s5;
    cout << "Enter marks of each subject: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    float avg = (s1+s2+s3+s4+s5)/5.0;
    cout << "Average: " << avg << endl;
    if ((avg > 100) || (avg < 0))
        cout << "Any one of your subject inputs is invalid!";
    else if ((avg>=90) && (avg<=100))
        cout << "Grade: A";
    else if ((avg>=80) && (avg<90))
        cout << "Grade: B";
    else if ((avg>=70) && (avg<80))
        cout << "Grade: C";
    else   
        cout << "Grade: Fail";
}