#pragma once
#include <iostream>

class Animal
{
    public:
        virtual void roar() const = 0; 
        virtual void eat() const = 0;
};