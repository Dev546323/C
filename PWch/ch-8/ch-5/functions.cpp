#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b)
    return a; //there can be multiple return statements in a function, but ONLY ONE return will run. 
    else return b;
}

void killme(){ //function declaration
    //void = function type
    cout<<"i wanna die\n";
    return; //this terminates a function
}
void please(){ // void cannot produce an usable output at the caller
    cout<<"please ";
    killme(); //a function previously declared can be called to any other function 
}
int sum(int a, int b){ //int a, int b are formal parameters i.e this tells the function how many inputs it will take and of what kind.
    //int produces integer output at the caller
    return a+b;
}

int main(){ //main function 100% necessary
    //main function can only be called once. 
    please (); //function call. 
    int x,y;
    cout<<"enter 2 number: ";
    cin>>x>>y;
    cout<<sum (x,y)<<endl; //using void sum shows an error with <<
    cout<<max(x,y);
   
}