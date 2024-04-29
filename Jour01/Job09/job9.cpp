#include <iostream>

int a;
int b;
int c;

int main(){
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
    std::cout << "Enter a third number: ";
    std::cin >> c;

    if (a > b && a > c){
        std::cout << a << " is the greatest number" << std::endl;
    }
    else if (b > a && b > c){
        std::cout << b << " is the greatest number" << std::endl;
    }
    else{
        std::cout << c << " is the greatest number" << std::endl;
    }
    return 0;
}