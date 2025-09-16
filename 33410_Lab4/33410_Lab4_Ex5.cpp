#include <iostream>
using namespace std;
int main() {
    bool wd, vac, si;
    cout << "Is it a weekday? (1/0): ";
    cin >> wd;
    cout << "Are you on a vacation? (1/0): ";
    cin >> vac;
    si = !wd || vac;
    if (si)
        cout << "You can sleep.";
    else
        cout << "You can't sleep.";    
}