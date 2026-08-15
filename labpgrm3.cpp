//implement a program to demostrate inline function , default arguments and function overloading for performing arithmetic operations
#include<iostream>
using namespace std;

inline int square(int n){ //inline function
  return n*n;
}

int addition(int a ,int b=10){  //default arguments
  return a+b;
}

int multiply(int a,int b){  // function overloading
  return a*b;
}

double multiply(double a ,double b){
  return a*b; 
}

int main(){
  cout<<"Square of number is : "<<square(5);
  cout<<"Addition of numbers is : "<<addition(1);
  cout<<"Multiplication of numbers is : "<<endl;
  cout<<multiply(3,7)<<endl;
  cout<<multiply(3.5,9.0);

  return 0;
}
