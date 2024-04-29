#include <iostream>

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int x = 5;
int y = 6;
int n = 7;
int p = 8;
int i = 9;

int main()
{
    a = x+5;
    std::cout << a << std::endl;
    a = x = y +2;
    std::cout << a << std::endl;
    a = x == y;
    std::cout << a << std::endl;
    a = i++ * n+p;
    std::cout << a << std::endl;
    return 0;
}

