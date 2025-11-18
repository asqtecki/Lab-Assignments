#include <iostream>
#include <cstring>
using namespace std;
int WordCount(char *Text, int *size) {
    *size = strlen(Text);
    int c=0;
    for (int i=0;i<*size;i++) {
        if (Text[i]==' ')
            c++;
    }
    return c+1;
}
int main() {
    char a[200];
    int s;
    cout << "Enter a string: ";
    cin.get(a, 200);
    cin.ignore();
    cout << "Number of words in the string are: " << WordCount(a, &s);
}