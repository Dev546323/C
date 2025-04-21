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
        
    
    cylinder(double r, double h){ //constructor with parameters
        if (r<1 || h<1){
            cout<<"Invalid input"<<endl;
            radius=1;
            height=1;
            return;
        }
        radius = r;
        height = h;
    }

    double volume(){
        return PI*pow(radius,2)*height;
    }
};