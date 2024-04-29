#include <iostream>

int a;

int main(){
    std::cout <<"Enter a number: ";
    std::cin >> a;

    for(int i = 1; i < 11; i++){
        std::cout << a << " x " << i << " = " << a*i << std::endl;
    }
    return 0;
}