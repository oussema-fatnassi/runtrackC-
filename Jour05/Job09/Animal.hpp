#pragma once
#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void roar() const = 0; 
        virtual void eat() const = 0;

        static int getTotalAnimals() {
            return totalAnimals;
        };

    protected:
        Animal() {
            totalAnimals++;
        };
        static int totalAnimals;

};
int Animal::totalAnimals = 0;