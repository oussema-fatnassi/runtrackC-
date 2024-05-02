#include <iostream>
using namespace std;

int numbers[] = {4, 23, 353, 44, 5243};

int main(){
    int* ptr = numbers;
    for (int i = 0; i < 5; i++){
        cout << "The memory address of the element " << numbers[i] << " is " << ptr + i << endl;
    }
}