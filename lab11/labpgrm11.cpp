#include <iostream>
using namespace std;

// Function overloading: same function name, different parameter types

// Add two integers
int add(int a, int b) {
    return a + b;
}

// Add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Concatenate two strings
string add(string a, string b) {
    return a + b;
}

int main() {
    
    int intResult = add(10, 20);
    cout << "Addition of integers: " << intResult << endl;


    float floatResult = add(5.5f, 4.5f);
    cout << "Addition of floats: " << floatResult << endl;

    
    string strResult = add("Hello, ", "World!");
    cout << "Concatenation of strings: " << strResult << endl;

    return 0;
}
