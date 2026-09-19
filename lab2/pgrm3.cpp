#include<iostream>

using namespace std;
auto salary(double &n){
    n=n*1.10;
    return n;
}
void bypointer(double *n){
    *n=*n * 1.10;
    
}



int main(){
double m;
cout<<"Enter the salary : "<<endl;
cin>>m;
cout<<"Salary after updation by 10% : "<<endl;
cout<<salary(m)<<endl;
bypointer(&m);
cout<<m<<endl;
return 0;
}