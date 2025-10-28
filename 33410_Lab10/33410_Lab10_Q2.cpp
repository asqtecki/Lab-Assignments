#include <iostream>
#include <cstring>
using namespace std;
void word() {
    char s[5000];
    int c=0;
    cout << "Enter a sentence: ";
    cin.get(s, 5000);
    for (int i=0;i<strlen(s);i++) {
        if (s[i]==' ')
            c++;
    }
    cout << "Word count: " << c+1;
}
int main() {
    word();
}