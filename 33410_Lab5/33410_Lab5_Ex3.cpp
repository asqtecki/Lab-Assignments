#include <iostream>
using namespace std;
int main() {
    int se=500, n, sop, jun, stb, inc=0;
    float d=0.8;
    cout << "\t\t\t\t\t\tMenu Selection\n\n";
    cout << "1. Purchase Ticket\n2. Display Information\n3. Exit";
    cout << "\nEnter your choice: ";
    cin >> n;
    while (n!=3) {
            if (n==1) {
                cout << "How many tickets would you like to buy?: ";
                cin >> stb;
                if (stb > se) {
                    cout << "Sorry, the available seats are 500\n";
                }
                else if (stb <= se) {
                    se -= stb;
                    cout << "How many sophomores?: ";
                    cin >> sop;
                    cout << "How many juniors: ";
                    cin >> jun;
                    if (stb > 3) 
                        inc = 0.8 * ((100.0 * (float)sop)+(50.0 * (float)jun));
                    else    
                        inc = (100*sop) + (50*jun);
                }
            }
            else if (n==2) {
                cout << "Available seats: " << se << endl;
                cout << "Income: " << inc<< endl; 
            }
            else
                cout << "Invalid choice!\n";
        cout << "\n1. Purchase Ticket\n2. Display Information\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> n;
    }
}