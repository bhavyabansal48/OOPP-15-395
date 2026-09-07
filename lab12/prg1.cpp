#include<iostream>

using namespace std;
class point{
    int x,y;
    public:
    point(int x=0,int y=0):x{x},y{y}{}
     friend ostream&  operator<<(ostream &os,point t);
    point operator+(point p){
        int a=x+p.x;
        int b=y+p.y;
        point q(a,b);
        return q;
    }


};
ostream &operator<<(ostream &os,point t){
    os<<t.x<<" "<<t.y<<endl;
    return os;
}


int main(){
    point p1(10,5);
    point p2(-9,16);
    cout<<p1;
    cout<<p2;
    point p3=p1+p2;
    cout<<p3<<" "<<p1<<" "<<p3;

return 0;
}