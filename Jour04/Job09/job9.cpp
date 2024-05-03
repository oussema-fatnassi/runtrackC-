#include <iostream>
using namespace std;

int sizeArray;
int* ptr = new int[sizeArray];

int main() {
    cout << "Enter the size of the array: ";
    cin >> sizeArray;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < sizeArray; i++) {
        cin >> ptr[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < sizeArray; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete[] ptr;
    return 0;
}