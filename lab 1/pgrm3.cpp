#include<iostream>

using namespace std;
class point{
    int x,y;
    public:
    void input(){
        cout<<"Enter the value of x : "<<endl;
        cin>>x;
        cout<<"Enter the value of y : "<<endl;
        cin>>y;
    }
    void show(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
        cout<<endl;
        cout<<endl;
    }
};

int main(){
    point p1,p2;
    p1.input();
    p2.input();
    p1.show();
    p2.show();

return 0;
}