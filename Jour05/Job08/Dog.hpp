#include "Animal.hpp"
#include <iostream>
using namespace std;

class Dog : public Animal
{
    public:
        void roar() const {
            cout << "Woof!" << endl;
        };
        void eat() const {
            cout << "The dog has a varied diet" << endl;
        };
};