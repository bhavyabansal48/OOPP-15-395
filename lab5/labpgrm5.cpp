//Design a class to represent a bank account with proper data hiding and member functions for deposit and withdraw operations
#include<iostream>
using namespace std;
class BankAccount {
    private :
    string accholder;
    string accnumber;
    double balance ;
    public:
    BankAccount(string name, string accnum , double initialbalance){
        accholder=name;
        accnumber=accnum;
        if(initialbalance>=0){
            balance =initialbalance;

        }
        else{
         balance=0;
         cout<<"Invalid initial balance "<<endl;
        }
        }
        void deposit(double amount){
            if(amount>0){
                balance+=amount;
                cout<<"Deposited amount is : "<<amount<<endl;
                cout<<"Total balance now become : "<<balance<<endl;
            }
            else{
                cout<<"Enter a valid amount to be deposited ..."<<endl;
            }
        }
        void withdraw(double amount){
            if(amount>balance){
                cout<<"Amount is higher than your bank balance , kindly enter valid amount : "<<endl;
            }
            else if(amount<=0){
                cout<<"Invalid withdraw amount ..."<<endl;
            }
            else{
                balance-=amount;
                cout<<"Withdraw amount is : "<<amount<<endl;
                cout<<"After withdraw the remaning balance is : "<<balance<<endl;
            }
        }
        void display(){
            cout<<"Account details are as follows : "<<endl;
            cout<<"Account holder is : "<<accholder<<endl;
            cout<<"Account number is : "<<accnumber<<endl;
            cout<<"Current balance is : "<<balance<<endl;
            cout<<endl;

        }
    
};
int main(){
    BankAccount myAcc("bhavya" , "12416", 500.0);
    myAcc.display();
    myAcc.deposit(150.90);
    myAcc.withdraw(100.0);
    myAcc.display();
    return 0;
}