#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char type, db, ml;
    double t[6]; 
    int i=0;
    cout << "Enter your coffee type (W, B):";
    type = getche();
    cout << endl;
    cout << "Do you want a double cup (Y, N): ";
    db = getche();
    cout << endl;
    cout << "Do you want to work manually (Y, N): ";
    ml = getche();
    cout << endl;
    if (type == 'W') {
        t[0]=15; 
        t[1]=15; 
        t[2]=20; 
        t[3]=2; 
        t[4]=4; 
        t[5]=20;
        if (ml == 'Y') {
            cout << "Steps: " << endl;
            cout << "Put Water for 15 minutes." << endl;
            cout << "Add Sugar for 15 minutes." << endl;
            cout << "Mix Well for 20 minutes." << endl;
            cout << "Add Coffee for 2 minutes." << endl;
            cout << "Add Milk for 4 minutes." << endl;
            cout << "Mix Well for 20 minutes." << endl;
            cout << "Please follow the above steps carefully.";
        }
        else if (ml =='N') {
            if (db == 'Y') {   
                for (;i<6;i++) 
                    t[i] = t[i] + ((50.0/100.0)*t[i]);
                cout << "Steps: " << endl;
                cout << "Put Water: " << t[0] << " minutes" << endl;
                cout << "Add Sugar: " << t[1] << " minutes" << endl;
                cout << "Mix Well: " << t[2] << " minutes" << endl;
                cout << "Add Coffee: " << t[3] << " minutes" << endl;
                cout << "Add Milk: " << t[4] << " minutes" << endl;
                cout << "Mix Well: " << t[5] << " minutes" << endl;
            }
            else if (db=='N') {
                cout << "Steps: " << endl;
                cout << "Put Water: " << t[0] << " minutes" << endl;
                cout << "Add Sugar: " << t[1] << " minutes" << endl;
                cout << "Mix Well: " << t[2] << " minutes" << endl;
                cout << "Add Coffee: " << t[3] << " minutes" << endl;
                cout << "Add Milk: " << t[4] << " minutes" << endl;
                cout << "Mix Well: " << t[5] << " minutes" << endl;
            }
            else   
                cout << "Invalid choice!";
        }
        else  
            cout << "Invalid choice!";
    }
    else if (type == 'B') {
        t[0]=20; 
        t[1]=20; 
        t[2]=25; 
        t[3]=15; 
        t[4]=0; 
        t[5]=25;
        if (ml=='Y') {
            cout << "Steps: " << endl;
            cout << "Put Water for 20 minutes." << endl;
            cout << "Add Sugar for 20 minutes." << endl;
            cout << "Mix Well for 25 minutes." << endl;
            cout << "Add Coffee for 15 minutes." << endl;
            cout << "Do not add milk!" << endl;
            cout << "Mix Well for 25 minutes." << endl;
            cout << "Please follow the above steps carefully.";
        }
        else if (ml=='N') {
            if (db == 'Y') {   
                for (;i<6;i++) 
                    t[i] = t[i] + ((50.0/100.0)*t[i]);
                cout << "Steps: " << endl;
                cout << "Put Water: " << t[0] << " minutes" << endl;
                cout << "Add Sugar: " << t[1] << " minutes" << endl;
                cout << "Mix Well: " << t[2] << " minutes" << endl;
                cout << "Add Coffee: " << t[3] << " minutes" << endl;
                cout << "Add Milk: " << t[4] << " minutes" << endl;
                cout << "Mix Well: " << t[5] << " minutes" << endl;
            }
            else if (db=='N') {
                cout << "Steps: " << endl;
                cout << "Put Water: " << t[0] << " minutes" << endl;
                cout << "Add Sugar: " << t[1] << " minutes" << endl;
                cout << "Mix Well: " << t[2] << " minutes" << endl;
                cout << "Add Coffee: " << t[3] << " minutes" << endl;
                cout << "Add Milk: " << t[4] << " minutes" << endl;
                cout << "Mix Well: " << t[5] << " minutes" << endl;
            }
            else   
                cout << "Invalid choice!";
        }
        else  
            cout << "Invalid choice!";
    }
}