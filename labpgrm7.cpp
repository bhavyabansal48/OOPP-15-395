#include <iostream>
using namespace std;

class function {
    static int objectCount;   // static member shared by all objects
    int value;

public:
    function(int v = 0) {
        value = v;
        objectCount++;
    }

    // Friend function to access private static data
    friend void showObjectCount();

    void display() {
        cout << "Value: " << value << endl;
    }
};

// Definition of static member
int function::objectCount = 0;

// Friend function definition
void showObjectCount() {
    cout << "Total objects created: " << function::objectCount << endl;
}

int main() {
    function d1(10), d2(20), d3(30);

    d1.display();
    d2.display();
    d3.display();

    // Friend function accessing static member
    showObjectCount();

    return 0;
}
