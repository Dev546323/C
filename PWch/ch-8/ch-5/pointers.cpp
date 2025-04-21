//pointers are a way to store memory addresses of variables. 
#include<iostream>
using namespace std;
void swap(int* a, int* b){ //using mem addy let's you change the orignal variable.
    int temp= *a;
    *a=*b;
    *b=temp;
    
}

int main(){
    int x;
    int y=7;
 
    cout<<"enter a number ";
    cin>>x;
    int* p; //the declaration of a pointer
    p=&x;// initialization of a pointer
    cout<<x<<" "<<&x<<" "<<p<<" "<<*p<<endl;
    swap(&x, &y); //pass by refernce i.e memory address
    cout<< x<<" "<<y;

    *p= y;
    
    cout<<endl<<x;
    cout<<endl;
}