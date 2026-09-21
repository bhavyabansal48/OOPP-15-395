#include<iostream>

using namespace std;
auto area(double radius){
    return 3.14*(radius*radius);
}
auto area (double len,double width){
    return len*width;
}
auto area(int side){
    return side*side;
}
auto area(double base,double height,bool tri){
    return base*height*(0.5);
}


int main(){
    cout<<"Area of circle is : "<<endl;
    cout<<area(10)<<endl;
    cout<<"Area of rectangle is : "<<endl;
    cout<<area(12,8)<<endl;
    cout<<"Area of Square is : "<<endl;
    cout<<area(2)<<endl;
    cout<<"Area of triangle is : "<<endl;
    cout<<area(2,30,true)<<endl;

    

return 0;
}