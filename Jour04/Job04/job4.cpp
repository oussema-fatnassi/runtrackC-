#include <iostream>
using namespace std;


int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;
    cout << "Before changing the values: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    *ptr1 = 11;
    *ptr2 = 21;
    *ptr3 = 31;
    cout << "After changing the values: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}