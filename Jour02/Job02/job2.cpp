#include <iostream>

int main(){
    int n;
    std::cin >> n;
    switch (n)
    {
        case 0 : std::cout << "Null\n";
        case 1 :
        case 2 : std::cout << "Small\n";
        break;
        case 3 :
        case 4 :
        case 5 : std::cout << "Medium\n";
        default : std::cout << "Big\n";
    }
}

// Results:
// 0 -> Null, Small
// 1 -> Small
// 4 -> Medium, Big
// 10 -> Big
// -5 -> Big