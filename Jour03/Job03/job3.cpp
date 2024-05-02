#include <iostream>
#include <string>
using namespace std;

string a;
string b;

int main(){
    cout << "Enter the first character chain: ";
    getline(cin, a);
    cout << "Enter the second character chain: ";
    getline(cin, b);

    if (a.length() == b.length()){
        for (int i=0; i<a.length(); i++){
            if (a[i] != b[i]){
                cout << "The two chains are different." << endl;
                return 0;
            }
        }
        cout << "The two chains are identical." << endl;
    } else {
        cout << "The two chains are different." << endl;
    }
}