#include <iostream>
using namespace std;

int table[7];
int sum;

int main(){
    cout << "Enter 7 numbers: ";
    for (int i=0; i<7; i++){
        cin >> table[i];
    }

    for (int i=0; i<7; i++){
        if (table[i] % 2 == 0){
            sum += table[i];
        }
    }
    cout << "The sum of the even numbers is: " << sum << endl;
}