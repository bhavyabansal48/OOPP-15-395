#include<iostream>

using namespace std;


int main(){
  int salary=1000;
  int *newsalary=&salary;
  *newsalary=*newsalary* 1.10;
  cout<<salary<<endl;

return 0;
}