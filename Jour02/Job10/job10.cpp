#include <iostream>
#include <cmath>
using namespace std;

int a;

int main(){

    cout << "Give me a positive number: ";
    cin >> a;
        while (a != 0 )
        {
            if (a<0)
            {
                cout << "The number is negative, please give me a positive number: ";
                cin >> a;
            }
            else
            {
                cout << "The square root of " << a << " is " << sqrt(a) << endl;
                cout << "Give me another number: ";
                cin >> a;
            }
        }
}