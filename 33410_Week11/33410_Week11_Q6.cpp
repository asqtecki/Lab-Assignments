#include <iostream>
#include <cstring>
using namespace std;
void SentenceCase(char *Text, int *size) {
    *size = strlen(Text);
    bool cap = true;
    for (int i=0;i<*size;i++) {
        if (Text[i]=='.') {
            cap = true;
        }
        else if (cap && Text[i]>='a' && Text[i]<='z') {
            Text[i] = Text[i] - 32;
            cap = false;
        }
        else if (!cap && Text[i]>='A' && Text[i]<='Z') {
            Text[i] = Text[i] + 32;
        }
        else {
            cap = false;
        }
    }
}
int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    cin.ignore();
    char *a = new char[n+1];
    cout << "Enter a string: ";
    cin.getline(a, n+1);
    int s;
    SentenceCase(a, &s);
    cout << "Sentence case output: " << a;
}