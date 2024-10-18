#include<iostream>
using namespace std;

class Students {
public:
    int rollNumber;
    void getRollNumber() {
        cout<<"\n\n\tEnter the roll number of student :  ";
        cin>>rollNumber;
    }
    void displayRollNumber() {
        cout << "\n\n\tRoll Number of the student is :  " << rollNumber ;
    }
};

class Test : public Students {
public:
    int subject1, subject2;
    void getMarks() {
        cout<<"\n\n\tEnter the marks in Subject 1 :  ";
        cin>>subject1;
        cout<<"\n\n\tEnter the marks in Subject 2 :  ";
        cin>>subject2;
    }
    void displayMarks() {
        cout << "\n\n\tMarks in Subject 1: " << subject1 ;
        cout << "\n\n\tMarks in Subject 2: " << subject2 ;
    }
};

class Result : public Test {
public:
    int totalMarks;
    void calculateTotal() {
        totalMarks = subject1 + subject2;
    }
    void displayTotal() {
        cout << "\n\n\tTotal Marks: " << totalMarks ;
    }
};

int main() {
    Result student1;
    student1.getRollNumber();
    student1.getMarks();
    student1.calculateTotal();

    student1.displayRollNumber();
    student1.displayMarks();
    student1.displayTotal();

    return 0;
}
