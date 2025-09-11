#include <iostream>
using namespace std;
int main() {
    int scr;
    cout << "Enter score: ";
    cin >> scr;
    if ((scr<0) || (scr>100))
        cout << "Invalid input!";
    else if ((scr>=90) && (scr<=100))
        cout << "Grade: A";
    else if ((scr>=80) && (scr<90))
        cout << "Grade: B";
    else if ((scr>=70) && (scr<80))
        cout << "Grade: C";
    else if ((scr>=60) && (scr<70))
        cout << "Grade: D";
    else   
        cout << "Grade: F";
}