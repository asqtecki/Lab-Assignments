#include <iostream>
using namespace std;
int square(int x) {
    return x*x;
}
int cube(int x) {
    return x*x*x;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = square(n) + cube(n);
    cout << "Square = "<< square(n) << ", Cube = " << cube(n) << ", Sum = " << result;
}