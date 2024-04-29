#include <iostream>

int a;

int main(){
    std::cout <<"Enter a year: ";
    std::cin >> a;

    if(a%4 == 0){
        if(a%100 == 0){
            if(a%400 == 0){
                std::cout << "The year is a leap year" << std::endl;
            }
            else{
                std::cout << "The year is not a leap year" << std::endl;
            }
        }
        else{
            std::cout << "The year is a leap year" << std::endl;
        }
    }
    else{
        std::cout << "The year is not a leap year" << std::endl;
    }
}