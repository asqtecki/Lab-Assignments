#include <iostream>
#include <cstdlib> 
#include <ctime>     
using namespace std;
const int n = 10;
int main() {
    int d[n], i;
    srand(time(0));
    for (i = 0; i<n; i++) {
        d[i] = rand() % 10;
    }
    int ac = 100 + rand() % 900; 
    int p = rand() % 1000;         
    int l = rand() % 10000;          
    cout << "(" << ac << ") " << p <<"-" << l << endl;
}
