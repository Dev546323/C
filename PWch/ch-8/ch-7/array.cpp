//arrays are always pass by reference 
#include<iostream>
using namespace std;

void change(int x[]){
    for(int i=0;i<5;i++){
        x[i]=x[i]+1;
    }
}

int main(){
    //array is a collection of similar data types.
    int y;
    y=5;
    cout<<"Enter the number of variables: ";
    cin>>y;
    // int x[y]; //declaration 
    //int is the data type, 5 is the number of variables. 
    //array index always start from 0
    int*z;
    int x[y] = {1,2,3,4,5}; //x[]={} not mentioning the size would only work if all initialization values are mentioned.
     //initialization & mass declaration has to be done at the same time.
    //this initialiaiton here is done at compile time, it puts the array to have 5 variables. 
    //if i enter y<5, the array will still be initialized with 5 variables, because that was defined at compile time, while y value is put at run time. 
    //if y>5 the array will use the value of y to initialize the array.uninitialized variables will be 0.
    cout<<z<<endl;
    x[0]=1;
    //this is the initialization of the frist variable in the array named x. the value of the 0th spot is 1.
     //single declarations can be done anyhow

    change(x);

    // cout<<"Enter the variables you would like to store\n ";


     // for(int i=0;i<y;i++){
     //     cout<<"Enter the "<<i<<"th variable: ";
     //     cin>>x[i];
     // }


    for(int i=0;i<y;i++){
        cout<<x[i]<<" ";
        z = &x[i];
        cout<<z<<endl;
    }
    
}