#include <iostream>

int priceDutyFree;
int kilos;
int tax;

int main(){
    std::cout << "Enter the duty free price of the product: ";
    std::cin >> priceDutyFree;
    std::cout << "Enter the how many kilos of the product you have bought: ";
    std::cin >> kilos;
    std::cout << "Enter the tax rate: ";
    std::cin >> tax;

    int priceWithTax = priceDutyFree + (priceDutyFree * tax / 100);
    int priceTotal = priceWithTax * kilos;

    std::cout << "The total price of the product is " << priceTotal << std::endl;
    return 0;
}