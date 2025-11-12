#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int s=4;
void game() {
    srand(time(0));
    int cards[s][s], num[s*s], k=0, i, j, r1, c1, r2, c2;
    bool rev[s][s] = {false};
    for (i=0;i<8;i++) 
        num[2*i] = num[2*i+1] = i+1;
    for (i=0;i<16;i++)
        swap(num[i], num[rand()%16]);
    for (i=0;i<s;i++) {
        for (j=0;j<s;j++) {
            cards[i][j] = num[k++];
        }
    }
    cout << "Memory Matching Game: \n";
    while (true) {
        cout << "\n   0 1 2 3\n";
        for (i=0;i<s;i++) {
            cout << i << "  ";
            for (j=0;j<s;j++) {
                if (rev[i][j]) cout << cards[i][j] << " ";
                else cout << '*' << " ";    
            }
            cout << endl;
        }
        bool D = true;
        for (i = 0; i < s; i++)
            for (j = 0; j < s; j++)
                if (!rev[i][j]) D = false;
        if (D) {
            cout << "\nYou Win!\n";
            break;
        }
        cout << "\nEnter row and column for first card guess: ";
        cin >> r1 >> c1;
        cout << "Enter row and column for second card guess: ";
        cin >> r2 >> c2;
        if (r1 < 0 || r1 >= s || c1 < 0 || c1 >= s || r2 < 0 || r2 >= s || c2 < 0 || c2 >= s || rev[r1][c1] || rev[r2][c2] || (r1 == r2 && c1 == c2)) {
            cout << "Invalid input. Try again!\n";
            continue;
        }
        cout << "You used " << cards[r1][c1] << " and " << cards[r2][c2] << ".\n";
        if (cards[r1][c1] == cards[r2][c2]) {
            cout << "Matched!\n";
            rev[r1][c1] = rev[r2][c2] = true;
        } else {
            cout << "No, Try again!\n";
        }
    }
}   
int main() {
    game();
}