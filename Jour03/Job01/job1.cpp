#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase;

    cout << "Enter a phrase: ";
    getline(cin, phrase); 

    for (int i=0; i<phrase.length(); i++){
        putchar(toupper(phrase[i]));
    }
    cout << endl; 
    return 0;
}