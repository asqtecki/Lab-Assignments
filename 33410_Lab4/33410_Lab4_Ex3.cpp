#include <iostream>
using namespace std;
int main() {
    int cal, fat, cof;
    double cofp;
    cout << "Enter number of calories: ";
    cin >> cal;
    cout << "Enter grams of fat: ";
    cin >> fat;
    if ((cal < 0) || (fat<0)) {
        cout << "Invalid Input!, calories or fats can't be in negative.";
        return 0;
    }
    else if (cof > cal) {
        cout << "Invalid Input, calories from fat are more than total calories.";
        return 0;
    }
    cof = fat*9;
    cout << "Number of calories from fat: " << cof << endl;
    cofp = (((double)cof)/cal) * 100.0;
    cout << "Percentage of calories from fat: " << cofp << endl;
    if (cofp < 30)
        cout << "The food is low in fat.";
    else   
        cout << "The food is high in fat.";
}