#include <iostream>
#include <string>
using namespace std;

string chain;
int length;

int main(){
    cout << "Enter a phrase: ";
    getline(cin, chain);

    length = chain.length();
    char table[length+1];

    for (int i=0; i<length; i++){
        table[i] = chain[i];
        cout << table[i];
    }
    table[length+1] = '\0';
    cout << table[length+1] << endl;
}