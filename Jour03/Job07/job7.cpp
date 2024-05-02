#include <iostream>
#include <string>
using namespace std;

int numbers[10];
int temp;
int indexNumber;

int main(){
    for (int i=0; i<10; i++){
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    for (int i=0; i<10; i++){

        if (numbers[i] > temp){
            temp = numbers[i];
            indexNumber = i;
        }
    }
    cout << "The biggest number is " << temp << " at the index " << indexNumber << endl;
}