#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    struct Point point;
    struct Point* ptr = &point;
    ptr->x = 10;
    ptr->y = 20;

    cout << "Coordinates of the point: (" << ptr->x << ", " << ptr->y << ")" << endl;
}