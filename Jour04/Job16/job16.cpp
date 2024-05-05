#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 15, 25, 35, 45, 55, 10};
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int max = numbers[0];

    for ( int i = 1; i < numbersSize; i++ ) {
        int& ref = numbers[i];
        if (ref > max) {
            max = ref;
        }
    }

    cout << "The maximum number in the array is: " << max << endl;
}