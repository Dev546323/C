#include<iostream>
using namespace std;


class person{
    string fname{"Undefined"};
    string lname{"Undefined"};
    int age{0};

    public:

    person()= default;

        person  (string& f, string& l, int& a){
            fname = f;
            lname = l;
            age = a;
            cout<<"string cons";
        }

            person(string_view f, string_view l, int& a){
                fname = f;
                lname = l;
                age = a;
                cout<<"str view";
            }
                person(string_view& f){
                    fname = f;
                }
                    person(string_view& f, string_view& l){
                        fname = f;
                        lname = l;
                    }
                        person(int& a){
                            age = a;
                        }
    void setfname(string_view& f){
        fname = f;
    }
        void setlname(string_view& l){
            lname = l;
        }
            void setage(int& a){
                age = a;
            }
    string getfname()const {
        return fname;
    }
        string getlname()const {
            return lname;
        }
            int getage()const {
                return age;
            }
            
    void display(){
        cout<<"First Name: "<<fname<<endl;
        cout<<"Last Name: "<<lname<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

class player :/*player is inherting from*/ public person{ //syntax meaning. 
    
    
};