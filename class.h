#ifndef CYLINDER_H
#define CYLINDER_H
#include <cmath>
#define PI 3.14159265358979323846
#include <iostream>
using namespace std;

class cylinder{
    private: //Private memebers can't be used outside the class. 
    //member variables should be private 
    double radius {}; //member variables
    double height {};
    public: 
    cylinder()=default; //constructor, it is used to initialize the class.
        //it is called when the object is created. It is a special function avaialbe only for classes. 
        //after putting a single constructor, the default constructor is not available. so we need to manually put in this line. 
    
    
 cylinder(double r, double h){ //constructor with parameters
    if (r<1 || h<1){ 
        cout<<"Invalid input"<<endl;
        return;
    }
    radius = r;
    height = h;
}
    double getradius(){
        return radius;
    }
    double getheight(){
        return height;
    }
    void setradius(double r){
        if (r<1){
            cout<<"Invalid input"<<endl;
            return;
        }
        radius = r;
    }
    void setheight(double h){
        if (h<1){
            cout<<"Invalid input"<<endl;
            return;
        }
        height = h;
    }
    

    double volume(){
        return PI*pow(radius,2)*height;
    }
};
#endif