#include <iostream>
#include <climits>
using namespace std;
void  mm() {
    int i, maxi = INT_MIN, mini = INT_MAX, n;
    cout << "Enter a number(enter a character to exit): ";
    while (cin >> n) {
        if (n > maxi) 
            maxi = n;
        if (n < mini) 
            mini = n;
    }
    cout << "Maximum: " << maxi << ", Minimum: " << mini;
}
int main() {
    mm();
}