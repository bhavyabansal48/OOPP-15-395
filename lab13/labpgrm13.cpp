#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    // Basic type to user-defined type
    Distance(float m) {
        meters = m;
    }

    // User-defined type to basic type
    operator float() const {
        return meters;
    }

    void display() {
        cout << "Distance: " << meters
             << " meters" << endl;
    }
};

int main() {
    float value = 25.5f;

    // Convert float to Distance object
    Distance d = value;

    cout << "Basic type to user-defined type:" << endl;
    d.display();

    // Convert Distance object to float
    float result = d;

    cout << "\nUser-defined type to basic type:" << endl;
    cout << "Distance in meters: "
         << result << endl;

    return 0;
}