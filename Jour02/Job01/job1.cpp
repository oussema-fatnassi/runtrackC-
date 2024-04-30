#include <iostream>

int main(){
    int n;
    do {
        std::cout << "Give me a number > 0: ";
        std::cin >> n;
    } while (n <= 0);
}