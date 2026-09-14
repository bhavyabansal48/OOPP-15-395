// #include <iostream>
// using namespace std;
// int main(){
//     int balance=1000,deposit,withdraw;
    
//     cout<<"Enter your choice"<<endl;
//    cout<<"1........Show Balnce"<<endl;
//     cout<<"2........Withdraw amount"<<endl;
//      cout<<"3........Deposit amount"<<endl;
//     int num;
//     cin>>num;
//     switch(num){
//         case 1:
//         cout<<balance;
//         break;
//         case 2:
//         cin>>withdraw;
//         if(balance<withdraw){
//             cout<<"not possible";
//         }
//         else{
//             cout<<withdraw;
//         }
//         break; 
//         default:
//         cin>>deposit;
//         cout<<balance+deposit;
//         break;
//     }
    
//     return 0;
    
// }
#include<iostream>
using namespace std;
class complex{
    int real ,img;
    public:
    complex(int r=0,int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<" , "<<img<<endl;
    }
    complex operator + (complex c){
        return complex(real+c.real,img+c.img);
    }
};

int main(){
complex c1{5,10},c2{10,20},c3;
c3=c1+c2;
c1.show();
c2.show();
c3.show();
return 0;
}