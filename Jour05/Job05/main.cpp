#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;

int main() {
    Student student;
    student.initStudent("Balboa", "Rocky", 21, 123456);
    cout << "Last Name : " << student.getLastName() << endl;
    cout << "First Name : " << student.getFirstName() << endl;
    cout << "Age : " << student.getAge() << endl;
    cout << "ID Number : " << student.getIdNumber() << endl;

    return 0;
}