#include<iostream>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    void get_person() {
        cout << "\n\n\tEnter the name of person : ";
        cin >> name;
        cout << "\n\n\tEnter the age of the person : ";
        cin >> age;
    }
    void set_person() {
        cout << "\n\n\tPerson's name is : " << name;
        cout << "\n\n\tPerson's Age is : " << age;
    }
};

class student : public person {
protected:
    float percentage;

public:
    void get_student() {
        get_person();
        cout << "\n\n\tEnter the percentage: ";
        cin >> percentage;
    }
    void set_student() {
        set_person();
        cout << "\n\n\tPercentage of the student is : " << percentage;
    }
};

class teacher : public person {
protected:
    float salary;

public:
    void get_teacher() {
        get_person();
        cout << "\n\n\tEnter the salary of the teacher : ";
        cin >> salary;
    }
    void set_teacher() {
        set_person();
        cout << "\n\n\tSalary: " << salary;
    }
};

int main() {
    student s;
    teacher t;

    s.get_student();
    t.get_teacher();

    s.set_student();
    t.set_teacher();

    return 0;
}
