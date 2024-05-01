#include <iostream>
using namespace std;

int number;

int main(){
    cout << "Enter a number for the limit of the Fibonacci sequence: ";
    cin >> number;

    int a = 0;
    int b = 1;
    int c;
    
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < number; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}