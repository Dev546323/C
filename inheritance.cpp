#include<iostream>
#include<iomanip>
#include<ios>
#include<limits>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<concepts>
#include "inheritance.h"

using namespace std;
inline  void end(){
    cout<<endl<<endl;
}

class person;
class game; 
int main(){
    cout<<"Please Enter your First name: ";
    string fname,lname;
    cin>>fname;
    cout<<"\nPlease Enter your Last name: ";
    cin>>lname;
    cout<<"\nPlease Enter your age: ";
    int age;
    cin>>age;
    person p1(fname,lname,age);
    p1.display();
}