#include<iostream>
using namespace std;
void show(int x, int y){
    cout<<"x:"<<x<<", y:"<<y<<endl;
}
void swapbyval(int x,int  y){
    int z=x;
    x=y;
    y=z;

cout<<"Value after swap"<<endl;

    show(x,y);
}
void swapbyadd(int *x, int *y){
    int z=*x;
    *x=*y;
    *y=z;
    cout<<"Value after swap"<<endl;
    show(*x,*y);

}
void swapbyref(int &x, int &y){
    int z=x;
    x=y;
    y=z;
    cout<<"Value after swapping "<<endl;
    show(x,y);
}
int main(){
    int x,y;
    cout<<"Enter the value of x , y"<<endl;
    cin>>x>>y;
    cout<<endl;
    cout<<endl;
    cout<<"Swapping by value"<<endl;
    cout<<"Value Before swap"<<endl;
    show(x,y);
    swapbyval(x,y);
    cout<<endl;
    cout<<endl;
    cout<<"Swapping by Address"<<endl;
    cout<<"Value before swap"<<endl;
    show(x,y);
    swapbyadd(&x,&y);
    cout<<endl;
    cout<<endl;
    cout<<"Swapping by reference"<<endl;
    cout<<"Value before swap"<<endl;
    show(x,y);
    swapbyref(x,y);

}