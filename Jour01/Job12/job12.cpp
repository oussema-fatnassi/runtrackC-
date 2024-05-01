#include <iostream>
using namespace std;

double average;
int numbers[5];

int main(){
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> numbers[i];
    }
    for(int i = 0; i < 5; i++){
        average += numbers[i];
    }
    average /= 5;
    cout << "The average of the numbers is: " << average << endl;
    return 0;
}