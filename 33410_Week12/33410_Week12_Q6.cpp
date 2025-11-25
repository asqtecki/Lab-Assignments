#include <iostream>
using namespace std;
void replaceChar(char *text, char oldc, char newc) {
    while (*text != '\0') {
        if (*text == oldc)
            *text = newc;
        text++;
    }
}
int main() {
    char k[1000], oc, nc;
    cout << "Enter a string: ";
    cin.get(k, 1000);
    cout << "Enter the character you want to replace: ";
    cin >> oc;
    cout << "Enter the new character: ";
    cin >> nc;
    replaceChar(k, oc, nc);
    cout << "Updated string: " << k;
}