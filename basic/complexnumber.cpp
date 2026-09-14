#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    void input(){
        cout<<"Enter the real and imaginary number :"<<endl;
        cin>>real>>img;
        cout<<endl;
    }
    void show(){
        cout<<"The complex number formed is as follows :"<<endl;
        cout<<real;
        if(img>0){
            cout<<"+"<<img<<"i"<<endl;
        }
        else{
            cout<<img<<"i"<<endl;
        }
        cout<<endl;
    }
    void add(int a , int b){
        cout<<"After addition number is as follows : "<<endl;
        real=real+a;
        img=img+b;
        cout<<endl;
    }
    void add(complex p){
        cout<<"After addinmg complex number the number is as follows :"<<endl;
        real=real=p.real;
        img=img+p.img;
        cout<<endl;
    }
    
    void add(complex p , complex q){
        cout<<"After adding two complex number the number is as follows :"<<endl;
        real = p.real + q.real;
        img = p.img + q.img;
        cout<<endl;
    }
    complex Add(int a , int b){
        complex m;
        m.real = real + a;
        m.img = img + b;
        return m;
    }

};
int main(){
 complex c1 , c2, c3;
 c1.input();
 c2.input();
 c3.input();
 c1.show();
 c2.show();
 c2.add(c1);
 c2.show();
 c3.add(c1,c2);
 c3.show();
 complex q= c1.Add(5,10);
 q.show();
 return 0;
    
}