#include<iostream>

using namespace std;
class point{
    int x,y;
    public:
    point(int x=0,int y=0):x{x},y{y}{}
    void show(){
        cout<<x<<" "<<y<<endl;
    }
    point operator+(point p){
        int a=x+p.x;
        int b=y+p.y;
        point q(a,b);
        return q;
    }


};


int main(){
    point p1(10,5);
    point p2(-9,16);
    p1.show();
    p2.show();
    point p3=p1+p2;
    p3.show();

return 0;
}