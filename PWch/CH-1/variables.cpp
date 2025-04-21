#include<iostream>
using namespace std;
int main(){
    float x; //declaration of variable x
    x=5; //initialization of variable x
    cout<< x;
    x=x*4; //x*4 = old value of x * 4
    cout<<endl << x;
    x += 24;
    cout<<endl << x<<endl; 
 float a=2;
cout<<a++<<endl;
cout<<++a<<endl; //we can see the diff between a++ and ++a using this
cout<<a<<endl;
//division and multiplication has the same precedence depending on whichever comes first from left to right
//addition and subtraction has the same precedence depending on whichever comes first from left to right
//++ and -- have the highest precedence

}