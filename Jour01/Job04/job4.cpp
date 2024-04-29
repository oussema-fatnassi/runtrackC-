#include <iostream>

int a;
int b;

int main(){
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
    std::cout << "The sum of " << a << " and " << b << " is " << a+b << std::endl;
    return 0;
}