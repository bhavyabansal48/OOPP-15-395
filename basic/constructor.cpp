#include<iostream>
using namespace std;
class point{
    private :
    int x ,y;
    public:
//   point():x{0},y{0} {
//     cout<<"This one is default constructor :"<<endl;
//   } // new and 2nd version of cpp
//  point(int p ,int q):x{p},y{q} {
//     cout<<"This one is parametrized constructor : "<<endl;
//  }
point(int p=0, int q=0):x{p},y{q} {};

     void  show(){
      cout<<"The point is : ("<<x<<","<<y<<")"<<endl;

}
point add(point q){
//   point r;
//    r.x= x+q.x;
//    r.y= y+q.y;   long version 
//    return r;
cout<<"After addition : "<<endl;
return point(x+q.x , y+q.y);
cout<<endl; // short version , nameless object creation
}
// point add(point p , point q){
//     cout<<"After addition second : "<<endl;
//      point r;
//      r.x=p.x+q.x;
//      r.y=p.y+q.y;
// return r;
// }
void add(point q, point p){   //in this no return type present ..
    x=q.x+p.x;
    y=q.y+p.y;
}
void input(int p, int q){
    x=p;
    y=q;
}
 
};
int main(){
  point p,q(20,50);
//   p.show();
//   q.show();
  
//  point r = p.add(q);
//   r.show();
//   r.add(p,q);
//   r.show();
point r=q;
r.show();
q.show();


}