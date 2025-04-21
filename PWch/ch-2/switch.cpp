//same used as an alternative to if else, but is useless
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    char op;
    cout<<"Enter the operation you want to perform: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        break;
    case '-':    
        cout<<x<<"-"<<y<<"="<<x-y<<endl;
        break;
    case '*':    
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        break;
    case '/':
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
        break;
    default:
        cout<<"Invalid operation"<<endl;
        break;
    }
    cout<<endl;
    return 0;
}