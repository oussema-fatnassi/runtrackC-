#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber;
int userNumber;
int tries = 5;

int main(){
    cout << "Enter a number: ";
    cin >> userNumber;

    randomNumber = rand() % 100 + 1;

    for (int i=0; i<tries; i++){
        if (userNumber == randomNumber){
            cout << "Congratulations, you found the right number!" << endl;
            break;
        } else if (userNumber < randomNumber){
            cout << "The number is higher" << endl;
        } else {
            cout << "The number is lower" << endl;
        }
        cout << "Enter a number: ";
        cin >> userNumber;
    }
    cout << "The number was: " << randomNumber << endl;
}