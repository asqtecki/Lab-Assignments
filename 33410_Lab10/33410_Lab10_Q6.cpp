#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
void stats(int k[], int N) {
    int s=0, ss=0, i;
    double mean, var;
    for (i=0;i<N;i++) {
        s += k[i];
        ss += pow(k[i], 2);
    }
    mean = (float)s/N;
    var = (float)((N*ss)-(pow(s, 2)))/(N*(N-1));
    cout << "\nMean: " << mean << ", Standard Deviation: " << sqrt(var);
}
void RandomNum() {
    int R, i, N;
    cout << "Enter number of elements: ";
    cin >> N;
    cout << "Enter range: ";
    cin >> R;
    int a[N];
    srand(time(0));
    for (i=0;i<N;i++) {
        a[i] = rand() % R;
        cout << a[i] << " ";
    }
    stats(a, N);
}
int main() {
    RandomNum();
}