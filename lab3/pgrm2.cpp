#include<iostream>

using namespace std;
class point{
    int x,y;
    public:
  inline  void input();
   inline void show();
};
void point :: input(){
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of y : "<<endl;
    cin>>y;
    
}
void point :: show(){
    cout<<"The value of point is : "<<endl;
    cout<<"("<<x<<","<<y<<")"<<endl;
}



int main(){
point p;
p.input();
p.show();
return 0;
}