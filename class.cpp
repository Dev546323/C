#include<iostream>
#include<iomanip>
#include<ios>
#include<limits>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<concepts>
#define PI 3.14159265358979323846
#include "class.h"

using namespace std;
inline  void end(){
    cout<<endl<<endl;
}

class cylinder;
/*Mem variables can either be stack variables or pointers. can't be references. 
class functions have access to all class varaibles 
private members cannot be accessed outside the class at all. 
*/
class dog; //members private by default
struct cat;//members public by default 
//above is the only diff between the two 

int main(){


  
    cylinder c1; //default constructor is called.
    //The default constructor creates a TEMP and EMPTY object. 

    c1=cylinder(4.5,1.23); //c1 is considered as an object of the class
    //objects can be understood of as pointers for the entire class, you can access data inside the class using the object. 
    //it is not a pointer because it has nothing to do with mem addy, but it acts like a pointer

   c1.setheight(2.85); //setter function


    cout<<c1.volume()<<endl; //the bracket after cylinder is used to create a temporary object of the class.
    cout<<sizeof(c1)<<endl; 
    cout<<c1.getheight(); //getter function
    end();

    dog d1("fafda","pug",6);
   d1.bark();
   d1.dogage();
   cout<<"Dog's name is "<<d1.getname()<<endl;
   //we just need to create a destructor, it is automatically called by the compiler at run time. 
    d1.thi();
    cout<<sizeof(d1)<<endl;  //32b*2 strings + 8b pointer

   dog* pd = new dog("pavbhaji","pug",6);
   pd->thi(); //pd is a pointer it can't be dereferenced using * 
   //class pointers are dereferenced using -> operator.


   end();
   cat C("pizza","orange", 2);
    C.meow();
    cout<<C.getname()<<endl;
    cout<<C.getcolor()<<endl;
    cout<<C.getbraincells()<<endl;

    delete pd; //destructor inside the dog class will also be called. 
    //auto destructor is called when object goes out of scope (generally at the end of main)

}

