#include <iostream>
using namespace std;

int grade;
int main(){
    cout << "Give me your grade: ";
    cin >> grade;
    switch (grade)
    {
        case 0 ... 10:
            cout << "Fail\n";
            break;
        case 11 ... 20:
            cout << "Pass\n";
            break;
        default:
            cout << "Invalid grade\n";
            break;
    }
}