#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 30;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n >= a && n <= b) {
        cout << "WON" << std::endl;
    }
    else {
        cout << "LOST" << std::endl;
    }
}