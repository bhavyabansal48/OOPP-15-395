#include<iostream>

using namespace std;
class Time{
    int hh,mm,ss;
    public:
    void input(){
        cout<<"Enter the value of hour : "<<endl;
        cin>>hh;
        cout<<"Enter the value of minutes : "<<endl;
        cin>>mm;
        cout<<"Enter the value of seconds : "<<endl;
        cin>>ss;


    }
    void show(){
        cout<<"The current time is : "<<endl;
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

int main(){
   Time t1,t2;
   t1.input();
   t2.input();
   t1.show();
   t2.show();


return 0;
}