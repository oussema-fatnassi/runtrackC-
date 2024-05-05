#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
        int healthPoints;
        float defense;

    public:
        Person(string name, int healthPoints, float defense) : name(name), healthPoints(healthPoints), defense(defense) {};

        void initPerson(string name, int healthPoints, float defense){
            this->name = name;
            this->healthPoints = healthPoints;
            this->defense = defense;
        };

        void showPerson() const {
            std::cout << "The person is : " << name << ", healthPoints = " << healthPoints << ", defense = " << defense << std::endl;
        };

        void getName() const {
            std::cout << "The person is : " << name << std::endl;
        };

        void setName(string name){
            this->name = name;
        };

        void getHealthPoints() const {
            std::cout << "The person has " << healthPoints << " health points." << std::endl;
        };

        void getDefense() const {
            std::cout << "The person has " << defense << " defense points." << std::endl;
        };

        void setHealthPoints(int healthPoints){
            this->healthPoints = healthPoints;
        };

        void setDefense(float defense){
            this->defense = defense;
        };

        void takeDamage(int damage){
            healthPoints -= damage;
        };

        ~Person() {};
};