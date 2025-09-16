#include <iostream>
using namespace std;
int main() {
    double fsc, nts;
    cout << "Enter  your FSc score: ";
    cin >> fsc;
    cout << "Enter your NTS score: ";
    cin >> nts;
    if ((fsc > 70) && (nts >= 70))
        cout << "You are eligible for Oxford University's IT Program";
    else if ((fsc > 70) && (nts >= 60))
        cout << "You are eligible for Oxford University's Electronics Program";
    else if ((fsc > 70) && (nts >= 50))
        cout << "You are eligible for Oxford University's Telecommunication Program";
    else if (((fsc <= 70)&&(fsc>=60)) && (nts >= 50))
        cout << "You are eligible for MIT University's IT Program";
    else if (((fsc>=50)&&(fsc<=59)) && (nts >= 50))
        cout << "You are eligible for MIT University's Chemical Program";
    else if (((fsc>=40)&&(fsc<=50)) && (nts >= 50))
        cout << "You are eligible for MIT University's Computer Program";
    else
        cout << "Sorry! You're not eligible for any!";
}