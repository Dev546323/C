#include<iostream>
using namespace std;
int main(){
    //explicit type casting 
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    float y;
    y = (float)a; // y= float value of a
    cout<<"x/2= "<<y/2<<endl<<a/2;
    return 0;
}