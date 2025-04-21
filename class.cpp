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

int main(){



    cylinder c1(4.5,1.03); //c1 is considered as an object of the class
    //objects can be understood of as pointers for the entire class, you can access data inside the class using the object. 
    //it is not a pointer because it has nothing to do with mem addy, but it acts like a pointer

  
    // c1.radius =3;
    // c1.height =5;
    
    cout<<c1.volume()<<endl; //the bracket after cylinder is used to create a temporary object of the class.
    cout<<sizeof(c1)<<endl; 

}

