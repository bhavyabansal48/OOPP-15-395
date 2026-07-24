#include <iostream>
using namespace std;
int main(){
    int balance=1000,deposit,withdraw;
    
    cout<<"Enter your choice"<<endl;
   cout<<"1........Show Balnce"<<endl;
    cout<<"2........Withdraw amount"<<endl;
     cout<<"3........Deposit amount"<<endl;
    int num;
    cin>>num;
    switch(num){
        case 1:
        cout<<balance;
        break;
        case 2:
        cin>>withdraw;
        if(balance<withdraw){
            cout<<"not possible";
        }
        else{
            cout<<withdraw;
        }
        break; 
        default:
        cin>>deposit;
        cout<<balance+deposit;
        break;
    }
    
    return 0;
    
}