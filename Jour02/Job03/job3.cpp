#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    int sum = 0;
    do{
        cout << "Give me an integer number: ";
        cin >> n;
        sum += n;
        i++;
    } while (i<4);
    cout << "The sum of the four numbers is: " << sum << endl;
}