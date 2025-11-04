#include <iostream>
using namespace std;
void JobSelect() {
    int m, e;
    cout << "Enter marks: ";
    cin >> m;
    cout << "Enter experience in years: ";
    cin >> e;
    if (m>=50 || e==0)
        cout << "Selected as Trainee Engineer";
    else if (m>=60 && e>=1)
        cout << "Selected as Assistant Developer";
    else if (m>=70 && m<=100 && e>=2)
        cout << "Selected as Associate Developer"; 
    else    
        cout << "Not qualified!";
}
int main() {
    JobSelect();
}