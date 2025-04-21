//important stuff here. 
#include <iostream>
#include<cmath>//pre-existing library functions include sqrt, cbrt, pow(a to the power b), min max, 
using namespace std;
//division and multiplication and modulus has the same precedence depending on whichever comes first from left to right
//addition and subtraction has the same precedence depending on whichever comes first from left to right
//++ and -- have the highest precedence
//assignment operator "=" goes from right to left, not the normal way. 
int max(int a, int b){
    if(a>b)
    return a; //there can be multiple return statements in a function, but ONLY ONE return will run. 
    else return b;
}
void killme(){ //function declaration
    //void/int/float etc = function type
    cout<<"i wanna die\n";
    return; //this terminates a function
}
void please(){ // void cannot produce an usable output at the caller
    cout<<"please "<<endl;
    killme(); //a function previously declared can be called to any other function 
}
int sum(int a, int b){ //int a, int b are formal parameters i.e this tells the function how many inputs it will take and of what kind. basically declaration of variables. 
    //int produces integer output at the caller
    return a+b; //since i'm using an int function it is necessary to return a integer value
}
int main(){ //main can only be used once. 
    float x,y,z; 
    cout<<"Enter 3 numbers: ";
    cin>>x>>y>>z;
    cout<<"x*y/x=" <<x*y/z <<endl <<"is not the same as y/x*x= " <<y/x*z; 
    cout<<endl; //"they will not have the same answer because arithmetic operations with the same precedence are done from left to right

    //type casting 
    x = (int)x;
    cout<<endl <<"integer value of x="<<x<<endl;

    //arithmetic is done before a variable is initialized. 
    //for the compiler, if it looks like an integer it is an integer. 
    float a=5/2;
    float b=5/2.0;

    cout<<a<<endl;//even though 5/2 is 2.5, the compiler will treat it as an integer and give the answer as integer
    cout<<b<<endl;//5/2.0 is a float value and the compiler will treat it as a float and give the answer as 
    cout<<endl;
    //if undefined each separate operation before initialization is treated as an integer until specified with a decimal point. 


    //else if is more effecient as compared to multiple if statements because with else if not all the conditions are checked only checked sequentially     
    if (x>y){ //if (condition) {task if condition met}
        cout<<"x is greater than y"<<endl;
    }
    if (y>x and y>z){ //since this is if as well, both the conditions are checked
        cout<<"y is greater than x"<<endl;
    }
    else if(x==y){ //if the first condition is met, the rest of the conditions are not checked
        cout<<"x is equal to y"<<endl;
    }
    else { //if none of the conditions are met, this is executed
        cout<< "z is the greatest number"<<endl;
    }
    cout<<endl;

    //&& operator is conisdered as the AND operator, this is used to confirm ALL CONDITIONS ARE met. "and" is also considered as a keyword in cpp

    //|| operator is considered as the OR operator, this is used to confirm AT LEAST ONE condition is met. "or" is also considered ass a keyword in cpp
    //FOR LOOP 
    //WITHOUT {} only one action is considered as a part of the loop. any action/statement is not considered as part of the loop. 
    int g;
    cout<<"enter 2 to prevent looping and having multiple answers";
    cin>>g;
    for (g;g>0;g--){ //value ; condition ; operator 
        //TO USE FOR INSTEAD OF FOR SIMPLY USE for (;condition;)
        if (g%2==0){
            cout<<endl;
            continue;//skips an iteration.
        }
        cout<<"killme"<<endl;
        x=y;
        while (x>0){ //nested loop
            // while is pretty much the same as a for loop. 
            cout<<x<<endl;
            x-=2;
            break;// break just breaks the loop it is put in, not every loop. 

        }
     }

    bool flag=false;
    //bool is the boolean operator
    //it can either be true(1) or false(0)
    //we initiate the state of the boolean as false or true depending on the condition
    //can be used to check if a loop had an output, check composite.cpp for how. 

    please();
    killme();
    cout<<sum(x,y)<<endl; //x,y here are called actual parameters/pass by value, these are values that are actually given to the function basically initialization. 
     

    cout<<max(x,y)<<endl<<endl; 

        //see the changes in the 2 below to understand the orientation of the array
        //array index always start from 0
     //arrays are always pass by reference 

    
        int p[][3]= {{1,2,3},{4,5,6},{7,8,9},{4,5,6}};//filling the number of ROWS IS NECESSARY
        int q=(sizeof(p)/sizeof(p[0]));
        int w=(sizeof(p[0])/sizeof(p[0][0]));
        for(int i=0;i<q;i++){
            for(int j=0;j<w;j++){
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<q<<" "<<w<<endl<<endl;
    
        int u[][3]={1,2,3,4,5,6,7,8,9,1,2,3};
        for(int i=0;i<w;i++){
            for(int j=0;j<q;j++){
                cout<<u[i][j]<<" ";
            }
            cout<<endl;
        }

        string s;
        cout<<"Enter a string: ";
        getline(cin,s);
        cout<<s<<endl;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int ;
//     cout<<"Enter a number: ";
//     cin>>;
// }