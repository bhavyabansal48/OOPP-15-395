#include <iostream>
using namespace std;


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout<<"Value before swapping : "<<x<<" , "<<y<<endl;
    cout<<"Value After swap by value : "<<endl;
    swapByValue(x,y);
    cout<<x<<" , "<<y<<endl;
    cout<<endl;
    cout<<"value after swap by reference : "<<endl;
    swapByReference(x,y);
    cout<<x<<" , "<<y<<endl;
    cout<<"Value after swap  by address : " <<endl;
    swapByAddress(&x,&y);
    cout<<x<<" , "<<y<<endl;

    return 0;
}
