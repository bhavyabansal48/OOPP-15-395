#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading unary minus operator
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    // Overloading binary plus operator
    Complex operator+(const Complex& obj) const {
        return Complex(real + obj.real,
                       imag + obj.imag);
    }

    void display() const {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex sum = c1 + c2;

    cout << "Sum of complex numbers: ";
    sum.display();

    Complex neg = -c1;

    cout << "Unary minus of first number: ";
    neg.display();

    return 0;
}