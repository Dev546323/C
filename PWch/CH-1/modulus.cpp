#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"remainder of a/b= " <<a%b <<endl << "remainder of b/a= " << b%a;
    return 0; 
}
//modulus can only be used on integers
//if division is not possible, then the remainder is the number itself\
// modulus is useful only to check for divisibility 
//MODULUS (-) INTEGERS DO NOT EXIST
