#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "Animal.hpp"
using namespace std;

int main(){
    Dog dog1, dog2;
    Cat cat,cat1;

    dog1.roar();
    dog2.eat();

    cat.roar();
    cat1.eat();

    cout << "Total animals: " << Animal::getTotalAnimals() << endl;
}