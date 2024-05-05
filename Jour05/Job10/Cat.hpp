#include "Animal.hpp"
#include <iostream>
using namespace std;

class Cat : public Animal
{
    public:
        void roar() const {
            cout << "Miaou!" << endl;
        };
        void eat(const string& food) const  {
            if(food == "croquettes")
                cout << "The cat eats some croquettes" << endl;
            else
                cout << "The cat eats fish" << endl;
        };

        void eat() const {
            cout << "The cat eats fish" << endl;
        };
};