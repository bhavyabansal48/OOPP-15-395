#include <iostream>

using namespace std;
class Demo
{
    int val;

public:
    Demo()
    {
        val = 0;
    }
    Demo(int v)
    {
        val = v;
        cout << "Parameterized constructor" << endl;
    }
    Demo(const Demo &obj)
    {
        val = obj.val;
        cout << "Copy constructor" << endl;
    }

    void display()
    {
        cout<<val<<endl;
    }
};

int main()
{
 Demo obj1;
 obj1.display();
 Demo obj2(50);
 obj2.display();
 Demo obj3(obj2);
 obj3.display();
    return 0;
}