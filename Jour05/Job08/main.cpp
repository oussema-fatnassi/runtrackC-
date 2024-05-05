#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
using namespace std;

int main(){
    Dog dog;
    Cat cat;

    dog.roar();
    dog.eat();

    cat.roar();
    cat.eat();
}