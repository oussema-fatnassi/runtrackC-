#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruits[] = {"apple", "banana", "orange", "kiwi", "ananas"};

    cout << "My favorite fruits are :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << '\n'<<fruits[i] << endl;
    }

    cout << "\nHow many favorite fruits do you have ? ";
    int numberOfFavoriteFruits;
    cin >> numberOfFavoriteFruits;

    string* favorite = new string[numberOfFavoriteFruits];

    cout << "\nEnter your " << numberOfFavoriteFruits << " favorite fruits:" << endl;
    for (int i = 0; i < numberOfFavoriteFruits; i++) {
        cout << "Fruit " << i+1 << ": ";
        cin >> favorite[i];
    }

    cout << "\nYour favorite fruits are:" << endl;
    for (int i = 0; i < numberOfFavoriteFruits; i++) {
        cout << favorite[i] << endl;
    }

    delete[] favorite;
    return 0;
}