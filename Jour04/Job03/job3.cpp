#include <iostream>
#include <string>
using namespace std;

void inverseChain(string* str) {
    int i = 0, j = str->size() - 1;
    while (i < j) {
        char temp = (*str)[i];
        (*str)[i] = (*str)[j];
        (*str)[j] = temp;
        i++;
        j--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    inverseChain(&str);
    cout << "Inverted string: " << str << endl;
    return 0;
}