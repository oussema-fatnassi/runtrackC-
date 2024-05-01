#include <iostream>

int n;
int m;
int a;

int main(){
    std::cout << "Enter a number for n: ";
    std::cin >> n;
    std::cout << "Enter a number for m: ";
    std::cin >> m;

    std::cout <<"Your n number is " << n << " and your m number is " << m << std::endl;
    a = n;
    n = m;
    m = a;
    std::cout <<"Your n number is " << n << " and your m number is " << m << std::endl;
    return 0;
}
