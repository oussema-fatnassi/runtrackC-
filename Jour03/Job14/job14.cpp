#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int i = 0, j = str.size() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    int size = sizeof(tab) / sizeof(tab[0]);

    cout << "Palindrome words : ";
    bool foundPalindrome = false;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(tab[i])) {
            if (foundPalindrome) {
                cout << ", "; 
            }
            cout << tab[i];
            foundPalindrome = true;
        }
    }
    cout << endl;

    return 0;
}