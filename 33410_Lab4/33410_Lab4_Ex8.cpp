//help
#include <iostream>
using namespace std;
int main() {
    int ft;
    cout << "Enter number of food types: ";
    cin >> ft;
    if (ft==1) {
        int q;
        char fc;
        cout << "Enter your food choice (B, F, P, S): ";
        cin >> fc;
        cout << "Enter quantity: ";
        cin >> q;
        if (fc=='B')
            cout << "Total price is: " << q*200;
        else if (fc=='F')
            cout << "Total price is: " << q*50;
        else if (fc=='P')
            cout << "Total price is: " << q*500;
        else if (fc=='S')
            cout << "Total price is: " << q*150;
        else
            cout << "Invalid food choice!";
    }
    else if (ft==2) {
        int q1=1, q2=2;
        char fc1, fc2;
        cout << "Enter your first food choice (B, F, P, S): ";
        cin >> fc1;
        if (fc1=='B') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 200;  
        }
        else if (fc1=='F') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 50;   
        }
        else if (fc1=='P') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *=500;   
        }
        else if (fc1=='S') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 150;   
        }
        else
            cout << "Invalid food choice!";
        cout << "Enter your 2nd food choice (B, F, P, S): ";
        cin >> fc2;
        if (fc2=='B') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 200;
        }
        else if (fc2=='F') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 50;
        }
        else if (fc2=='P') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 500;
        }
        else if (fc2=='S') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 150;
        }
        else
            cout << "Invalid food choice!";
        cout << "Total price is: " << q1+q2;
    }
    else if (ft==3) {
        char fc1, fc2, fc3;
        int q1, q2, q3;
        cout << "Enter your 1st food choice (B, F, P, S): ";
        cin >> fc1;
        if (fc1=='B') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 200;  
        }
        else if (fc1=='F') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 50;   
        }
        else if (fc1=='P') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *=500;   
        }
        else if (fc1=='S') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 150;   
        }
        else
            cout << "Invalid food choice!";
        cout << "Enter your 2nd food choice (B, F, P, S): ";
        cin >> fc2;
        if (fc2=='B') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 200;  
        }
        else if (fc2=='F') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 50;   
        }
        else if (fc2=='P') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *=500;   
        }
        else if (fc2=='S') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 150;   
        }
        else
            cout << "Invalid input!";
        cout << "Enter your 3rd food choice (B, F, P, S): ";
        cin >> fc3;
        if (fc3=='B') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 200;  
        }
        else if (fc3=='F') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 50;   
        }
        else if (fc3=='P') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *=500;   
        }
        else if (fc3=='S') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 150;   
        }
        else
            cout << "Invalid input!";
        cout << "Total price is: " << q1+q2+q3;
    }
    else if (ft==4) {
        char fc1, fc2, fc3, fc4;
        int q1, q2, q3, q4;
        cout << "Enter your 1st food choice (B, F, P, S): ";
        cin >> fc1;
        if (fc1=='B') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 200;  
        }
        else if (fc1=='F') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 50;   
        }
        else if (fc1=='P') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *=500;   
        }
        else if (fc1=='S') {
            cout << "Enter quantity: ";
            cin >> q1;
            q1 *= 150;   
        }
        else
            cout << "Invalid input!";
        cout << "Enter your 2nd food choice (B, F, P, S): ";
        cin >> fc2;
        if (fc2=='B') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 200;  
        }
        else if (fc2=='F') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 50;   
        }
        else if (fc2=='P') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *=500;   
        }
        else if (fc2=='S') {
            cout << "Enter quantity: ";
            cin >> q2;
            q2 *= 150;   
        }
        else
            cout << "Invalid input!";
        cout << "Enter your 3rd food choice (B, F, P, S): ";
        cin >> fc3; 
        if (fc3 =='B') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 200;  
        }
        else if (fc3=='F') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 50;   
        }
        else if (fc3=='P') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *=500;   
        }
        else if (fc3 =='S') {
            cout << "Enter quantity: ";
            cin >> q3;
            q3 *= 150;   
        }
        else
            cout << "Invalid food choice!";
        cout << "Enter your 4th food choice (B, F, P, S): ";
        cin >> fc4;
        if (fc4=='B') {
            cout << "Enter quantity: ";
            cin >> q4;
            q4 *= 200;  
        }
        else if (fc4=='F') {
            cout << "Enter quantity: ";
            cin >> q4;
            q4 *= 50;   
        }
        else if (fc4=='P') {
            cout << "Enter quantity: ";
            cin >> q4;
            q4 *=500;   
        }
        else if (fc4=='S') {
            cout << "Enter quantity: ";
            cin >> q4;
            q4 *= 150;   
        }
        else
            cout << "Invalid input!";
        cout << "Total price is: " << q1+q2+q3+q4;
    }
    else
        cout << "Invalid input!";
}