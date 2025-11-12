#include <iostream>
#include <cstring>
using namespace std;
bool palstr(char s[], char s1[], int i=0, int j=0) {
    if ((i==strlen(s)) && (j==strlen(s1))) return 1;
    else if (i!=j) return 0;
    if (s[i]==s1[j]) return palstr(s, s1, i+1, j+1);
    return palstr(s, s1, i, j+1);
}
int main() {
    char s[100], s1[100];
    int i, j=0;
    cout << "Enter a string: ";
    cin.get(s, 100); 
    cin.ignore();
    for (i=strlen(s)-1;i>=0;i--) {
        s1[j] = s[i];
        j++;
    }
    if (palstr(s, s1)) cout << "Palindrome";
    else cout << "Not Palindrome";
}