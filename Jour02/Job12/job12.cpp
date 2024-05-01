#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Give me a number: ";
    cin >> number;
    double result = 0.0;

    for (int i= 1; i<=number; i++)
    {
        result += 1.0/i;
        if (i < number)
            cout << "1/" << i << " + ";
        else
            cout << "1/" << i;
    }
    cout << " is " << result << endl;
}