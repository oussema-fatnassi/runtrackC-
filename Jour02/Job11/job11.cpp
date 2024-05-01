#include <iostream>
using namespace std;

int number;

int main(){
    cout << "Give me a number: ";
    cin >> number;

    if (number < 0)
        cout << "The factorial of a negative number is not defined" << endl;
    else {
        int factorial = 1;
        for (int i = 1; i <= number; i++)
            factorial *= i;
        cout << "The factorial of " << number << " is " << factorial << endl;
    }
}