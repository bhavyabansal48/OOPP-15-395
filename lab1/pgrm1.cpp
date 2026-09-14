#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    string branch;
    public:
    student(string n,int r,string b):name{n},roll{r},branch{b}{}
    void show(){
        cout<<"Name of student : "<<name<<endl;
        cout<<"Roll Number of Student : "<<roll<<endl;
        cout<<"Branch of Student is : "<<branch<<endl;
    }

    

};



int main(){
student s1("Bhavya",34,"CSE");
student s2("Ram",10,"ME");
s1.show();
s2.show();
return 0;
}