#include <iostream>
using namespace std;

int a;
int b;

int main (){
    cout << "Give me the first number: ";
    cin >> a;
    cout << "Give me the second number: ";
    cin >> b;

    while (a <= b)
    {
        cout << a << endl;
        a++;
    }
}