#include <iostream>
using namespace std;
const int MAX_STUDENTS = 100;

struct studentGrade {
    string firstName;
    string lastName;
    float grade;
};

void addGrade(struct studentGrade* studentGrade, int& numberOfStudents){
    if (numberOfStudents < MAX_STUDENTS) {
        cout << "\nEnter the first name of student " << ": ";
        cin >> studentGrade[numberOfStudents].firstName;
        cout << "Enter the last name of student " << ": ";
        cin >> studentGrade[numberOfStudents].lastName;
        cout << "Enter the grade of student " << ": ";
        cin >> studentGrade[numberOfStudents].grade;
        numberOfStudents++;
    } else {
        cout << "Maximum number of students reached." << endl;
    }
}

void showGrade(struct studentGrade* studentGrade, int numberOfStudents ){
    for (int i = 0; i < numberOfStudents; i++){
        cout << "\nStudent " << i+1 << ": " << studentGrade[i].firstName << " " << studentGrade[i].lastName << " has a grade of " << studentGrade[i].grade << endl;
    }
    if (numberOfStudents == 0){
        cout << "No student found." << endl;
    }
}

void deleteGrade(struct studentGrade* studentGrade, int& numberOfStudents){
    cout << "\nWhich student do you want to delete? " << endl;
    cout << "Enter the first name of the student: ";
    string firstName;
    cin >> firstName;
    cout << "Enter the last name of the student: ";
    string lastName;
    cin >> lastName;

    for (int i = 0; i < numberOfStudents; i++){
        if (firstName == studentGrade[i].firstName && lastName == studentGrade[i].lastName){
            for (int j = i; j < numberOfStudents - 1; j++) {
                studentGrade[j] = studentGrade[j + 1];
            }
            numberOfStudents--;
            return;
        }
    }
    cout << "\nStudent not found." << endl;
}

void showAvarage(struct studentGrade* studentGrade, int& numberOfStudents){
    float sum = 0;
    for (int i = 0; i < numberOfStudents; i++){
        sum += studentGrade[i].grade;
    }
    cout << "\nThe average of the grades is: " << sum / numberOfStudents << endl;
}

void showMenu(){
    cout << "\nMenu" << endl;
    cout << "1. Add a grade" << endl;
    cout << "2. Show the list of grade" << endl;
    cout << "3. Delete a grade of a student" << endl;
    cout << "4. Have the average of the grades" << endl;
    cout << "5. Exit the program" << endl;
    cout << "Enter your choice: ";
}

int main() {
    struct studentGrade* studentGrade = (struct studentGrade*)malloc(MAX_STUDENTS * sizeof(*studentGrade));
    int numberOfStudents = 0;
    bool isRunning = true;

    while (isRunning) {
        showMenu();
        char choice;
        cin >> choice;

        switch (choice) {
            case '1':
            if (numberOfStudents < MAX_STUDENTS)
                addGrade(studentGrade, numberOfStudents);
                break;
            case '2':
                showGrade(studentGrade, numberOfStudents);
                break;
            case '3':
                deleteGrade(studentGrade, numberOfStudents);
                break;
            case '4':
                showAvarage(studentGrade, numberOfStudents);
                break;
            case '5':
                isRunning = false;
                break;
            default:
                cout << "Your choice is not in the menu" << endl;
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    free(studentGrade);
    return 0;
}