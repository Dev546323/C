#include<iostream>
using namespace std;
int main(){
    int b,x,y,z;
    cout<<"Enter the side of the square ";
    cin>>b;
    x=1;
    y=1;
    z=0;
    for (x; x<=b;x++){
        for(int y=1;y<=b-x+1;y++){
            cout<<"  ";   
        }
        for (int y=1;y<=x;y++){
            cout<<"# ";
        }
        cout<<endl;
        

    }
}