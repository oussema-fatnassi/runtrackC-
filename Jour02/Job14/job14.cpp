#include <iostream>
using namespace std;

int number;
int main () {
    cout << "Enter a number to see if is a Narcissistic number: ";
    cin >> number;

    int digitsNumber = 0;
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        digitsNumber++;
    }

    int sum = 0;
    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digitsNumber);
        temp /= 10;
    }
    if(sum == number) {
        cout << number << " is a Narcissistic number." << endl;
    } else {
        cout << number << " is not a Narcissistic number." << endl;
    }
}