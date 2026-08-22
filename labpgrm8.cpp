#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Function to add two Number objects and return a new object
    Number add(const Number &obj) {
        Number temp;
        temp.value = this->value + obj.value;
        return temp; // returning object
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(15), n2(25);

    cout << "Object n1: ";
    n1.display();

    cout << "Object n2: ";
    n2.display();

    // Passing object as argument and returning object
    Number n3 = n1.add(n2);

    cout << "Result object n3 (n1 + n2): ";
    n3.display();

    return 0;
}
