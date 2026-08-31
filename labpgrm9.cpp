//Design a program pointers to objects and arrays of objects to manage dynamic data structures..
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

public:
    Student() {
        name = "";
        rollNo = 0;
        marks = 0.0;
    }

    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name <<endl<<"Roll No: " << rollNo<<endl<< "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    
    Student *students = new Student[n];

    cout << "\n--- Input Student Data ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\n--- Display Student Data ---\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    
    delete[] students;

    return 0;
}
