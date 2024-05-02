#include <iostream>
using namespace std;

struct data {
    int year;
    string school;
    float pi;
    string profession;
};

int main(){
    struct data data = {2019, "La Plateforme", 3.14, "Student"};
    struct data* ptr = &data;

    cout << "Year: " << ptr->year << " has the address "<< &data.year <<endl;
    cout << "School: " << ptr->school << " has the address "<< &data.school <<endl;
    cout << "Pi: " << ptr->pi << " has the address "<< &data.pi <<endl;
    cout << "Profession: " << ptr->profession << " has the address "<< &data.profession <<endl;
}