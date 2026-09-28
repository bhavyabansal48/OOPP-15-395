#include<iostream>

using namespace std;
class operations{
    int x,y;
    public:

    //   int sum(int a=0,int b=0,int c=0){
       
        
    //     return a+b+c;

    // }
    //  float  sum(float a,float b){
    //     cout<<"float"<<endl;
    //     return a+b;
    // }
     float  sum(int a,int b){
        cout<<"int"<<endl;
        return a+b;
    }

    
};

int main(){
operations p1,p2;
// cout<<p1.sum(1)<<endl;
float a,b;
a=10.5;
b=20.6;
//  auto x = p2.sum{25.6,82.4};
 auto y = p2.sum(25,5);
return 0;
}
