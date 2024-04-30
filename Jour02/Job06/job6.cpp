#include <iostream>
using namespace std;

int number;
int i = 1;

int main(){
    cout << "Give me a number: ";
    cin >> number;

    do {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " is divisible by 3 and 5" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << i << " is divisible by 3" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << i << " is divisible by 5" << endl;
        }
        else
        {
            cout << i << endl;
        }
        i++;

    } while(i <= number);
}