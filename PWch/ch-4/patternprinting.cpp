#include<iostream>
using namespace std;
int main(){
    int l,b,x,y;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    x=1;
    y=1;
    for (y;y<=b;y++){
        for(x;x<=l;x++){
        cout<<"* ";
        }
        cout<<endl;
        x=1;
    }

}
//nested loop
//have a clear vision of what you actually want to get done here. 
