#include<iostream>

using namespace std;
class student{
    string name;
    int roll;
    string branch;
    public:
    void input(){
        cout<<"Enter the name of student : "<<endl;
        cin>>name;
        cout<<"Enter the roll number of student : "<<endl;
        cin>>roll;
        cout<<"Enter the branch of student : "<<endl;
        cin>>branch;
    }
    void show(){
        cout<<"The name of student is : "<<name<<endl;
        cout<<"The roll number of student is : "<<roll<<endl;
        cout<<"The branch of student is : "<<branch<<endl; 
        cout<<endl;
        cout<<endl;

    }
};

int main(){
    student s1,s2;
    s1.input();
    s2.input();
    s1.show();
    s2.show();

return 0;
}