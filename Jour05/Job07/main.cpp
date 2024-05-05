#include <iostream>
#include "Contact.hpp"
#include <string>
using namespace std;

int main(){
    Contact contact1("John", 123456789);
    Contact contact2("Micheal", 333333333);
    Contact contact3("Jack", 444444444);
    Contact contactCopy(contact1);
    Contact contactCopy2(contact2);
    Contact contactCopy3(contact3);

    contact1.showContact();
    contactCopy.showContact();
    contactCopy.setName("Jane");
    contactCopy.setPhoneNumber(987654321);
    contactCopy.showContact();
    contact1.showContact();

    contact2.showContact();
    contactCopy2.setName("Norman");
    contactCopy2.setPhoneNumber(555555555);
    contactCopy2.showContact();

    contact3.showContact();
    contactCopy3.setName("Jill");
    contactCopy3.setPhoneNumber(666666666);
    contactCopy3.showContact();
}