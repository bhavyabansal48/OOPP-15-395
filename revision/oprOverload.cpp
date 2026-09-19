#include<iostream>

using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r=0, int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    // Complex operator+(Complex c){
    //     int r=this->real+c.real;
    //     int i=this->img+c.img;
    //     Complex t(r,i);                              // by memeber function 
    //     return t;
    //     }
    Complex operator+(int a){
        int r=this->real+a;
        int i=this->img+a;
        Complex t(r,i);
        return t;
    }
    Complex operator++(int x){
        Complex t=(this->real,this->img);  // this is for postfix function 
        real++;
        img++;
        return t;
    }
    Complex operator++(){
        real++;
        img++;
        Complex t=(real,img);
        return t;

    }
 friend Complex operator+(Complex c,Complex d);
 friend Complex operator+(int a,Complex c);

};
Complex operator+(Complex c,Complex d){
    int r=c.real+d.real;                              // by friend function 
    int i=c.img+d.img;
    Complex t(r,i);
    return t;
}
Complex operator+(int a,Complex d){
    int r=a+d.real;
    int i=a+d.img;
    Complex t(r,i);
    return t;
}

int main(){
Complex c1(5,20);
Complex c2(10,3);
c1.show();
c2.show();
Complex c3=c1+c2;
c3.show();
Complex c4=c1+5;
c4.show();
Complex c5=4+c2;
c5.show();
c5++;
c5.show();
++c5;
c5.show();

return 0;
}