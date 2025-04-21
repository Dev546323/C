//if
//else if

//ternary
//these are the 3 kinds of conditional statements in cpp
//ternary has the same function as else if, but can be written in 1 statement. 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 2 number: ";
    cin>>x>>y;
    // (condition)? task if condition met : task if condition not met
    (x>y)? cout<<x<<" is greater than"<<y: cout<<y<<"is greater than "<<x;
    cout<<endl;
    return 0;

}