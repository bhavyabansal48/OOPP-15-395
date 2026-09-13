// Design a program to convert a procedural implementation of student record system into an OPPP approach..
#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    float marks;
    public:
    void input(){
        cin>>roll_no;
        cin>>name;
        cin>>marks;
    }
    void display(){
        cout<<"The roll number of student is : "<<roll_no<<endl;
        cout<<"The name of student is "<<name<<endl;
        cout<<"The marks are "<<marks<<endl;
    }

};
int main(){
    student s;
    s.input();
    s.display();
    return 0;
}