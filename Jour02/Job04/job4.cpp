#include <iostream>
using namespace std;
int main(){

    double a;
    double b;
    char operation;
    cout << "Give me a number: ";
    cin >> a;
    cout <<"Chose the operation you want to do: +, -, *, /: ";
    cin >> operation;
    cout << "Give me a number: ";
    cin >> b;

    switch (operation)
    {
        case '+':
            cout << a << " + " << b << " = " << a+b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a-b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a*b << endl;
            break;
        case '/':
            if (b == 0)
            {
                cout << "You can't divide by 0" << endl;
            }
            else
            {
                cout << a << " / " << b << " = " << a/b << endl;
            }
            break;

        default:
            cout << "Invalid operation" << endl;
            break;
    }
}

