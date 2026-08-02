//write a program using modern cpp features such as auto and range based loops to traverse and display elements of a collection
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> numbers = {10 ,20,30,40,50};
cout<<"Elements in the collection : "<<endl;
for( const auto& num : numbers){
    cout<<num<<" ";
}
cout<<endl;
return 0;


}