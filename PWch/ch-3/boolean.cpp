#include<iostream>
using namespace std;
int main(){
    int x,y;
    bool flag=false;
    //bool is the boolean operator
    //it can either be true(1) or false(0)
    //we initiate the state of the boolean as false or true depending on the condition
    cout<<"Enter a number: ";
    cin>>x;
    y=x/2;
    for (y;y>=1;y--){
        if (x%y==0 and y>1){
            cout<<y<<" is a factor of "<<x<<endl;
            flag=true;
            
        }
    }
    if (flag==1){
        cout<<x<<" is a composite number"<<endl;
    }
    else{
        cout<<x<<" is a prime number"<<endl;
    }
    cout<<endl;
    return 0;
}