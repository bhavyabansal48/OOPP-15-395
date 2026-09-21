#include<iostream>

using namespace std;
class Time{
    int hh,mm,ss;
    public:
  void input();
  void show();    
};
void Time ::input(){
    cout<<"Enter the value of hh : "<<endl;
    cin>>hh;
    cout<<"Enter the value of mm : "<<endl;
    cin>>mm;
    cout<<"Enter the value of ss : "<<endl;
    cin>>ss;
}
void Time ::show(){
    cout<<"The value of time is : "<<endl;
    cout<<hh<<":"<<mm<<":"<<ss<<endl;
}

int main(){
    Time t1;
    t1.input();
    t1.show();
    

return 0;
}