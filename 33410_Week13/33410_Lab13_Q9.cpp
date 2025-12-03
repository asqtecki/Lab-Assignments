#include <iostream>
using namespace std;
struct com {
    int real, imag;
};
com operator + (com c1, com c2) {
    com res;
    res.real = c1.real + c2.real;
    res.imag = c1.imag + c2.imag;
    return res;
}
com operator * (com c1, com c2) {
    com res;
    res.real = (c1.real*c2.real) + (-(c1.imag*c2.imag));
    res.imag = (c1.real*c2.imag) + (c1.imag*c2.real);
    return res;
}
int main() {
    int r1, r2, i1, i2;
    cout << "First complex number: \n";
    cout << "Enter real part: ";
    cin >> r1;
    cout << "Enter imaginary part: ";
    cin >> i1;
    cout << endl;
    cout << "Second complex number: \n";
    cout << "Enter real part: ";
    cin >> r2;
    cout << "Enter imaginary part: ";
    cin >> i2;
    com c1{r1, i1}, c2{r2, i2}, sum, prod;
    cout << endl << "First number: " << c1.real << " + " << c1.imag << "i\n";
    cout << "Second number: " << c2.real << " + " << c2.imag << "i\n";
    sum = c1 + c2;
    prod  = c1 * c2;
    cout << endl << "Sum: " << sum.real << " + " << sum.imag << "i\n";
    cout << "Product: " << prod.real << " + " << prod.imag << "i";
}