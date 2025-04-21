#include<iostream>
using namespace std;
int main(){
    //while loop is considered as an alternate to for loop 
    //initialization, condition, increment is done all in different lines. 
    //while loop is used when the number of iterations is not known

    int x,y;
    y=0;
    cout<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>x;

    while (x>0){
        x/=10;
        y++;
    }
    cout<<"The number of digits in the number is "<<y<<endl;
    cout<<endl;
    return 0;
}