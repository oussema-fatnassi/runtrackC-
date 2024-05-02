#include <iostream>
using namespace std;

int number = 2019;
int* ptr = &number;

int main(){
    cout << "The value of number is: " << *ptr << endl;
}