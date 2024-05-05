#include <iostream>
#include <string>
using namespace std;

class Contact
{
    private:
        string name;
        int phoneNumber;

    public:
        Contact(string name, int phoneNumber) : name(name), phoneNumber(phoneNumber) {};
        Contact( Contact& contact) : name(contact.name), phoneNumber(contact.phoneNumber) {};

        void showContact() const {
            std::cout << "The contact is : " << name << ", phone number = " << phoneNumber << std::endl;
        };

        void getName() const {
            std::cout << "The contact is : " << name << std::endl;
        };

        void setName(string name){
            this->name = name;
        };

        void getPhoneNumber() const {
            std::cout << "The contact has " << phoneNumber << " phone number." << std::endl;
        };

        void setPhoneNumber(int phoneNumber){
            this->phoneNumber = phoneNumber;
        };

        ~Contact() {};
};