#include <iostream>
using namespace std;

int main(){
    int x = 12;
    int& ref = x;

    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;

    ref = 24;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    return 0;
}