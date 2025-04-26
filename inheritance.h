#pragma once 
#include<iostream>
using namespace std;


class person {
    string name{"Undefined"};
    int age{0};
    int years{};
    int contribution{};
    int salary{};
    double behavior{};
    string post{};


    public:
    string contri{};
    person()= default;
        person  (string f, int a, int y, int c, int s, double b, string p){
            name = f;
            if (age<18){
                age = a;
               // cout<<"You are not eligible to work";
            }
           years = y;
          contribution = c;
            salary = s;
            behavior = b;
            post = p;
           
        }
        person(string f){
            name = f;
        }
    void setfname(string_view f){
        name = f;
    }
        void setage(int a){
            age = a;
        }
            void setyears(int y){
                if(y<0){
                   // cout<<"Years cannot be negative";
                }
               else if(0<y && y<5){
                    //cout<<"You are a fresher";
                    years = y;
               }
                else if(5<y && y<10){
                    //cout<<"You are a mid level employee";
                    years = y;
                }
                else if(10<y && y<20){
                   // cout<<"You are a senior level employee";
                    years = y;
                }
                else if(y>20){
                //cout<<"You are a veteran";
                years= y;
                    }
                }
                
                        void setcontribution(int c){
                        if (c < 0) {
                           // cout << "Contribution cannot be negative";
                        } else if (c > 25 && c < 75) {
                            //cout << "Good contribution but there's major room for improvement";
                            contribution = c;
                        } else if (c >= 75 && c < 100) {
                           // cout << "Good contribution, we'll look into your promotion";
                            contribution = c;
                        } else if (c == 100) {
                          //Excellent contribution, you are a star";
                            contribution = c;
                        } else if (c > 100) {
                            //cout << "Impossible, you are a robot";
                            contribution = c;
                        } else {
                           // cout << "You're fired.";
                        }
                    }
                        void setsalary(int s){
                            salary = s;
                        }
                            void setbehavior(double b){
                                if (b < 0) {
                                   // cout << "behavior cannot be negative";
                                } else if (b > 2.5 && b < 7.5) {
                                   // cout << "Good behavior but there's major room for improvement";
                                    behavior = b;
                                } else if (b >= 7.5 && b < 10) {
                                    //cout << "Good behavior, we'll look into your promotion";
                                    behavior = b;
                                } else if (b == 10) {
                                   // cout << "Excellent behavior, you are a star";
                                    behavior = b;
                                } else if (b > 10) {
                                  //  cout << "Impossible, you are a robot";
                                } else {
                                   // cout << "You're fired.";
                                }
                            }
                                void setpost(string_view p){
                                    post = p;
                                }

    string getfname()const {
        return name;
    }
            int getage()const {
                return age;
            }
                 int getyears() const{
                return years;
                 }
                    int getcontribution() {
                        return contribution;
                    } 
                        int getsalary()const {
                            return salary;
                        }
                            double getbehavior()const {
                                return behavior;
                            }
                                string getpost()const {
                                    return post;
                                }

    void display(){
        cout<<"First Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class promotion :public person{
    public:
    promotion()= default;
    promotion(string f, int a, int y, int c, int s, double b, string p):person(f,a,y,c,s,b,p){}//constructor requires explicit declaration. 
    
    int promote(){
        if(getage()>=25 && getyears()>=5 && getcontribution()>=50 && getsalary()>=50000 && getbehavior()>=5.0){
            cout<<"You are eligible for promotion"<<endl;
            return 1;
        }
        else{
            cout<<"You are not eligible for promotion"<<endl;
            return 0 ; 
        }
       
    }
    void newdetails(){
        if(promote()==1){ //damn recursion here. 
            setcontribution(0);
            setbehavior(0);
            setsalary(getsalary()*1.2);
            cout<<getfname()<<" "<<getage()<<" "<<getyears()<<" "<<getcontribution()<<" "<<getsalary()<<" "<<getbehavior()<<" "<<getpost()<<endl;

        }
    }

};