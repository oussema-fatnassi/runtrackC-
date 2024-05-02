#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string string1, string2;

    cout << "Enter a phrase : ";
    getline(cin, string1);

    string2 = "Bonjour";

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    cout << "Chain 1 ordered : " << string1 << endl;
    cout << "Chain 2 ordered : " << string2 << endl;

    return 0;
}
