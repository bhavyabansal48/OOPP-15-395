#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {}

    void display() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    ~Student() {
        cout << "Student object destroyed.\n";
    }
};

int main() {
    cout << "Using unique_ptr:\n";

    unique_ptr<Student> ptr1 =
        make_unique<Student>(101, "Rahul");

    ptr1->display();

    cout << "\nUsing shared_ptr:\n";

    shared_ptr<Student> ptr2 =
        make_shared<Student>(102, "Aman");

    shared_ptr<Student> ptr3 = ptr2;

    cout << "Student Details:\n";
    ptr2->display();

    cout << "Reference count: "
         << ptr2.use_count() << endl;

    ptr3.reset();

    cout << "Reference count after reset: "
         << ptr2.use_count() << endl;

    cout << "\nMemory is released automatically "
         << "when smart pointers go out of scope.\n";

    return 0;
}