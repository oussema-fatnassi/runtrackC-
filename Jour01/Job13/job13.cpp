#include <iostream>
#include <cmath>
using namespace std;

int n;
int sum;

int main(){
    cout << "Enter an integer number: ";
    cin >> n;

    if(n<=5){
        for(int i = 0; i <= n; i++){
            sum += pow(i, 3);
        }
        cout << "The sum of the cubes of the numbers from 0 to " << n << " is: " << sum << endl;
    }
    else{
        for(int i = 5; i <= n; i++){
            sum += pow(i, 3);
        }
        cout << "The sum of the cubes from 5 to " << n << " is: " << sum << endl;
    }
    return 0;
}
