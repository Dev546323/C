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
#include <vector>

//Doesn't work, because i'm trying to use a loop to create objects 
std::ostream& operator<<(std::ostream& os, const person& person) {
    os << "Name: " << person.name << "\n";
    os << "Age: " << person.age << "\n";
    os << "Years: " << person.years << "\n";
    os << "Contribution: " << person.contribution << "\n";
    os << "Salary: " << person.salary << "\n";
    os << "Behavior: " << person.behavior << "\n";
    os << "Post: " << person.post << "\n";
    return os; //this function allows me to print the object of the class wtihout an explicit print function.. check line 55
}
using namespace std;
inline  void end(){
    cout<<endl<<endl;
}

class person;
class promotion;

int main(){
    // cout<<"Please Enter your First name: ";
    // string fname,lname;
    // cin>>fname;
    // cout<<"\nPlease Enter your Last name: ";
    // cin>>lname;
    // cout<<"\nPlease Enter your age: ";
    // int age;
    // cin>>age;
    // person p1(fname,lname,age);
    // p1.display();
    //  vector<person> p(100);
  
    promotion p1("Rohan", 36, 10, 50, 50000, 7.0, "Manager");
    promotion p2("Ravi", 30, 6, 60, 60000, 6.0, "Senior Manager");
    promotion p3("Ramesh", 28, 9, 40, 40000, 8.0, "Junior Manager");
    person p4("Ravi", 30, 6, 60, 60000, 6.0, "Senior Manager");
    // p1.promote();
    // p2.promote();
    // p3.promote();
    p1.newdetails();
    p2.newdetails();
    p3.newdetails();
    cout<<p4;
    
   
    // for(int i=0;i<100;i++){
        
    //     cout<<"Please Enter Employee name: ";
    //     cin>>name;
    //     if (name == "exit"){
    //         break;}
    //      p[i]=person (name);
    //      count++;
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee age: ";
    //     cin>>age;
    //     if (age == 0){
    //         break;}
    //      p[i].setage(age);
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee years: ";
    //     cin>>years;
    //     if (years == 0){
    //         break;}
    //      p[i].setyears(years);
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee contribution: ";
    //     cin>>contribution;
    //     if (contribution == 0){
    //         break;}
    //      p[i].setcontribution(contribution);
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee salary: ";
    //     cin>>salary;
    //     if (salary == 0){
    //         break;}
    //      p[i].setsalary(salary);
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee behavior: ";
    //     cin>>behavior;
    //     if (behavior == 0){
    //         break;}
    //      p[i].setbehavior(behavior);
    // }
    // for(int i=0;i<count;i++){
    //     cout<<"Please Enter Employee post: ";
    //     cin>>post;
    //     if (post == "exit"){
    //         break;}
    //      p[i].setpost(post);
    // }
    // vector<promotion> c(count);
    // cout<<"checking for promotion";
    // for(int i=0;i<count;i++){
    //     //cout<<"checking for promotion";
    //     c[i].promote();
    //     c[i].newdetails();
    // }
  

        

}