#include <iostream>
#include <cstring>
using namespace std;
bool substr(char s1[], char s2[], int i=0, int j=0) {
    if (strlen(s1)<=strlen(s2)) {
        if (i==strlen(s1)) return 1;
        else if (j==strlen(s2)) return 0;
        if (s1[i]==s2[j]) return substr(s1, s2, i+1, j+1);
        return substr(s1, s2, i, j+1);
    }
    else if (strlen(s1)>=strlen(s2)) {
        if (i==strlen(s2)) return 1;
        else if (j==strlen(s1)) return 0;
        if (s2[i]==s1[j]) return substr(s1, s2, i+1, j+1);
        return substr(s1, s2, i, j+1);
    }
    return 0;
}
int main() {
    char s1[100], s2[100];
    cout << "Enter string 1: ";
    cin.get(s1, 100);
    cin.ignore();
    cout << "Enter string 2: ";
    cin.get(s2, 100);
    cin.ignore();
    if (substr(s1, s2)) cout << s1 << " and " << s2 << " ARE substrings of each other";
    else cout << s1 << " and " << s2 << " ARE NOT substrings of each other";
}