#include <iostream>
#include <string>
using namespace std;

string n;
int temp;

int main(){
    cout << "Enter a number: ";
    cin >> n;

    cout << "The reverse of the number is: ";
    for(int i = 0; i < n.length()/2; i++){
        temp = n[i];
        n[i] = n[n.length()-1-i];
        n[n.length()-1-i] = temp;
    }
    cout << n << endl;
    return 0;
}