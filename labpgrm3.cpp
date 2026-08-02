//implement a program to demostrate inline function , default arguments and function overloading for performing arithmetic operations
#include<iostream>
using namespace std;
int sum(int a=0 ,int b=0 , int c=0 , int d=0){
    return (a+b+c+d);
}
int main(){
    cout<<"Sum when no argument is passed : " <<sum()<<endl;
    cout<<"Sum when only one argument is passed :  "<<sum(3)<<endl;
    cout<<"Sum when two arguments are passed    :  "<<sum(2,5)<<endl;
    cout<<"Sum when three arguments are passed  :  "<<sum(50,200,10)<<endl;
    cout<<"Sum when four arguments are passed   :   "<<sum(5,2,7,9)<<endl;
  return 0;
}
