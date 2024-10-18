#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "\n\n\tEnter student name: ";
        getline(cin, name);
        cout << "\n\n\tEnter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        cout << "\n\n\tStudent Name is : " << name ;
        cout << "Student Roll No is : " << rollNo ;
    }
};

class Marksheet : public Student {
private:
    float marks[3];
    float average;
    char grade;

public:
    void getMarks() {
        cout << "\n\n\tEnter marks for 3 subjects: \n";
        for (int i = 0; i < 3; ++i) {
            cout << "\n\n\tSubject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void calculateAverage() {
        float total = 0;
        for (int i = 0; i < 3; ++i) {
            total += marks[i];
        }
        average = total / 3;
    }



    void displayMarksheet() {
        displayStudentDetails();
        cout << "Marks: ";
        for (int i = 0; i < 3; ++i) {
            cout << marks[i] << " ";
        }
        cout << "\n\n\tAverage: " << average;

    }
};

int main() {
    Marksheet student;

    student.getStudentDetails();

    student.getMarks();

    student.calculateAverage();


    student.displayMarksheet();

    return 0;
}
