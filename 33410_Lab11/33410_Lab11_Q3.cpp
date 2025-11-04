#include <iostream>
#include <cstring>
using namespace std;
void CompareStrings(string a, string b) {
    if (a==b)
        cout << "Strings are Equal!";
    else if (a>b)
        cout << a << " is Greater!";
    else
        cout << b << " is Greater";
}
int main(){
    string s1, s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    CompareStrings(s1,s2);
}