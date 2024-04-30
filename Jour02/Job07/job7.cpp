#include <iostream>
using namespace std;

int a;
int b;

int main(){
    cout << "Give me the first number: ";
    cin >> a;
    cout << "Give me the second number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        cout << i << endl;
    }
    return 0;
}