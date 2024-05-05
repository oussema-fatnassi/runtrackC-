#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string lastName;
        string firstName;
        int age;
        int idNumber;

    public:
        Student() : lastName("DefaultLastName"), firstName("DefaultFirstName"), age(0), idNumber(0) {};

    void initStudent(const string& lastName, const string& firstName, int age, int idNumber){
        this->lastName = lastName;
        this->firstName = firstName;
        this->age = age;
        this->idNumber = idNumber;
    };

    string getLastName() const {
        return this->lastName;
    };

    string getFirstName() const {
        return this->firstName;
    };

    int getAge() const {
        return this->age;
    };

    int getIdNumber() const {
        return this->idNumber;
    };
};