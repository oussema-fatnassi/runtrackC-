#include <iostream>
#include <string>
using namespace std;

int integerNumber = 17;
float floatNumber = 3.14;
float realNumber = 123.345;
string character = "La Plateforme";

int main(){
    cout << "The memory address of the integer number " << integerNumber << " is " << &integerNumber << endl;
    cout << "The memory address of the float number " << floatNumber << " is " << &floatNumber << endl;
    cout << "The memory address of the real number " << realNumber << " is " <<&realNumber << endl;
    cout << "The memory address of the character " << character << " is " <<&character << endl;
}