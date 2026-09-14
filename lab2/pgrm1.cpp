#include<iostream>

using namespace std;


int main(){
    int salary=1000;
    int &newSalary=salary;
    salary+=salary/10;
    cout<<salary<<endl;


return 0;
}