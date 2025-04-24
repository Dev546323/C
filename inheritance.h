#include<iostream>
using namespace std;


class person{
    string fname{"Undefined"};
    string lname{"Undefined"};
    int age{0};

    public:

    person()= default;
    person(string_view f, string_view l, int a){
        fname = f;
        lname = l;
        age = a;
    }
    person(string_view f){
        fname = f;
    }
    person(string_view f, string_view l){
        fname = f;
        lname = l;
    }
    person(int a){
        age = a;
    }
    void setfname(string_view f){
        fname = f;
    }
    void setlname(string_view l){
        lname = l;
    }
    void setage(int a){
        age = a;
    }
    string getfname(){
        return fname;
    }
    string getlname(){
        return lname;
    }
    int getage(){
        return age;
    }
    void display(){
        cout<<"First Name: "<<fname<<endl;
        cout<<"Last Name: "<<lname<<endl;
        cout<<"Age: "<<age<<endl;
    }
    

};