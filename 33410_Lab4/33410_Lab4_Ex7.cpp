#include <iostream>
using namespace std;
int main() {
    float n;
    cout << "Enter earthquake richter scale value: ";
    cin >> n;
    if (n < 5)
        cout << "Earthquake does little to no damage.";
    else if ((n<5.5)&&(n>=5))
        cout << "Earthquake does some damage.";
    else if ((n>=5.5)&&(n<6.5))
        cout << "Earthquake can do serious damage. Walls may crack or fall.";
    else if((n>=6.5)&&(n<7.5))
        cout << "Earthquake can cause a disaster. Houses and buildings may collapse.";
    else
        cout << "Earthquake can cause a catastrophe. Most buildings will be destroyed.";
}