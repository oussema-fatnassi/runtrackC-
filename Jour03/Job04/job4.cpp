#include <iostream>
#include <string>
using namespace std;

string a;

int main(){
    cout << "Enter a phrase: ";
    getline(cin, a);

    int length = a.length();

    cout << "The phrase " << a << " contains " << length << " characters." << endl;
}