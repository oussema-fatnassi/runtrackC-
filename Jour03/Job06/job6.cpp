#include <iostream>
#include <string>
using namespace std;

int numbers[10];
int counter = 0;

int main(){
    for (int i=0; i<10; i++){
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    for (int i=0; i<10; i++){

        if (numbers[i] >= 5){
            counter++;
        }
    }
    cout << "There are " << counter << " numbers greater than or equal to 5." << endl;
}