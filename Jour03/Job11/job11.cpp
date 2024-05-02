#include <iostream>
using namespace std;

int arrayNumbers[7];
int sum;

int main(){
    cout << "Enter 7 numbers: ";
    for (int i=0; i<7; i++){
        cin >> arrayNumbers[i];
    }

    for (int i=0; i<7; i++){
        if (arrayNumbers[i] % 2 == 0){
            sum += arrayNumbers[i];
        }
    }
    cout << "The sum of the even numbers is: " << sum << endl;
}