#include <iostream>
#include <cstring>
using namespace std;
void ReverseName(char s[]) {
    int i;
    cout << "Reversed: ";
    for (i=strlen(s)-1;i>=0;i--)
        cout << s[i];
}
int main() {
    char a1[50], a2[50];
    cout << "First Name: ";
    cin.get(a1, 50);
    cin.ignore();
    cout << "Last Name: ";
    cin.get(a2, 50);
    cin.ignore();
    strcat(a1, " ");
    strcat(a1, a2);
    ReverseName(a1);
}