#include <iostream>
using namespace std;

int numbers[] = {1, 2, 3, 4, 5};
int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

int main(){

    for ( int i = 0; i < numbersSize; i++ ) {
        int& ref = numbers[i];
        cout << ref << " " << endl;
    }
    return 0;
}