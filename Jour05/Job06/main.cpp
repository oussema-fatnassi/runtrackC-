#include "Person.hpp"
#include <iostream> 
#include <string>
using namespace std;

int main() {
    Person person("Alice", 100, 20);

    person.showPerson();

    person.setName("Micheal");
    person.getName();

    person.setHealthPoints(80);
    person.getHealthPoints();

    person.setDefense(50);
    person.getDefense();

    person.takeDamage(20);
    person.getHealthPoints();

    return 0;
}