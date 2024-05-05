#include <iostream>
#include <string>
using namespace std;

struct Staff
{
    string lastName;
    string firstName;
};

struct Student
{
    string lastName;
    string firstName;
};  

void enterStudentData(Student& student) {
    cout << "What is the last name of the student? ";
    cin >> student.lastName;
    cout << "What is the first name of the student? ";
    cin >> student.firstName;
}

int main(){
    struct Staff staff = {"Cordial", "Alicia"};
    struct Staff staff2 = {"Malardier", "Pierre"}; 

    cout << "Staff 1:" << staff.lastName << endl;
    cout << "Staff 2:" << staff2.lastName << endl;

    Student students;
    int numberOfStudents;
    cout << "How many students are there in the class? ";
    cin >> numberOfStudents;
    Student* student = new Student[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Student " << i+1 << ":" << endl;
        enterStudentData(student[i]);
    }

    cout << "\nStudents in the class:" << endl;
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Student " << i+1 << ": " << student[i].lastName << " " << student[i].firstName << endl;
    }

    delete[] student;
    return 0;
  
}