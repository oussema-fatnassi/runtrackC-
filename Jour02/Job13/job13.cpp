#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int width = 4;

    cout << setw(width) << " " << "|";
    for (int j = 1; j <= 10; j++) {
        cout << setw(width) << j;
    }
    cout << endl;

    cout << string(11 * width + 1, '-') << endl;

    for (int i = 1; i <= 10; i++) {
        cout << setw(width) << i << "|";
        for (int j = 1; j <= 10; j++) {
            cout << setw(width) << i * j;
        }
        cout << endl;
    }
    return 0;
}