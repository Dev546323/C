//CONCEPTS, missing, can't run it for some reason. 


#include<iostream> //https://en.cppreference.com/w/cpp/header/cctype  
#include<iomanip> //https://en.cppreference.com/w/cpp/io/manip
#include<ios>
#include<limits> //let's you see the max and min limits of diff data types
#include<climits> //lets you use the max and min limits of diff data types. 
//https://en.cppreference.com/w/cpp/types/numeric_limits
#include<cmath> //https://en.cppreference.com/w/cpp/header/cmath
#include<cstring> //https://en.cppreference.com/w/cpp/header/cstring
#include<string> //https://en.cppreference.com/w/cpp/string/basic_string
#include<concepts> //https://en.cppreference.com/w/cpp/language/constraints

#include "basic.h" //Prototype to include custom functions 
//function overloading present here, please check. 
/*
By using the include command, the pre processor copies and pastes the entire function present under the header 
basically by using this particular line, everything that's under basic.h will be pasted here in the compile time. 
*/

using namespace std; 
inline  void end(){
    cout<<endl<<endl;
}

void printf ();//declaration/prototype needs to be done before main
int max(int a, int b);
double max(double a, double b); //overloading
double min(double a, double b);//compiler decides which return type function is suitable based on the argument type. 
int min(int a, int b);
int inc_multiply(int a, int b);
int reference(int& a); //perma changes in orignal variable
int pointer(int *a);//perma changes in orignal variable
void lowercase(string input, string &output);
void uppercase(string &input); //pass by reference
string addstr(string a, string b);

template <typename T> T pdt(T a, T b);//function template
template <> double* pdt<double*> (double* a, double *b); //for explicit specialization(special treatment for a particular data type) ,the primary function needs to be declared. 
//this specialization is done for the use of pointers with template. and this is funciton overloading.

/*Template dies and creates an instance of the function based on the parameter type passed.  ALL parameters need to be of the same TYPE at the same time.
multiple instances are created by the compiler based on the different parameter types, no duplicates of any instance is created. 
template instance is basically the compiler changing T with the parameter type passed

DON'T use template with pointers, it will perform pointer arithmetic.
the compiler doesn't dereference the pointer before performing the task. 
*/

template <typename T, typename F> T& quo(T &a, F &b);//function template with multiple data types that takes values by reference 



int main(){
printf();
int x{43}, y{23};
cout<<"Max: "<<max(x,y)<<endl<<"Min: "<<min(x,y)<<endl<<"Product of: "<<x+1<<" and "<<y+1<<" is: "<<inc_multiply(x,y)<<endl; //function call
end();

double x1{43.5}, y1{23.5};

//Function overloading
cout<<"Sum: "<<add(x,y)<<endl;
cout<<"Difference: "<<subtract(x,y)<<endl;
cout<<"Product: "<<multiply(x,y)<<endl;
cout<<"Quotient: "<<divide(x,y)<<endl;
cout<<"Sum: "<<add(x1,y1)<<endl;
cout<<"Difference: "<<subtract(x1,y1)<<endl;
cout<<"Product: "<<multiply(x1,y1)<<endl;
cout<<"Quotient: "<<divide(x1,y1)<<endl;
end();

//perma variable changes
int pointer1 {15}, reference1{20};
pointer(&pointer1); //pass by address
cout<<" Pointer: "<<pointer1<<" "<<&pointer1<<endl;
reference(reference1);//pass by reference
cout<<" Reference: "<<reference1<<" "<<&reference1<<endl;
end();

//String functions
string ok{"Please "};
string input{"I WANNA KILL MYSELF ALREADY"};
string output{input}; //input string and output string
lowercase(input, output);
cout<<"Lowercase: "<<output<<endl;
cout<<"String addition: "<<addstr(ok, output)<<endl;
end();


//Lambda functions

[]/*Capture list*/()/*parameters*/{}/*function*/; //lambda function
//lambda function is an anonymous function, it can be used to create a function without a name.
//Lambda functions can be used to create variables as functions, the functions are not global, hence allowing temp use. 

[] /*Capture list allows a lambda function to make changes to an outside varaible.*/ (double a, double b){
    cout<<"Sum: "<<a+b<<endl;
}(5.0, 10.0); //Instant call.
auto var =[](double a, double b){
    return a+b;
} (10.2,15.0);
cout<<"Lambda function with return: "<<var<<endl;
auto var1=[](double a, double b)->int{
    return a+b;
}(10.2,15.0);
cout<<"Lambda function specified with return: "<<var1<<endl;

cout<<var3(10,20)<<endl; //lambda function use, check basic.h for more details.
var1=45; //it is no longer a lambda function.
cout<<var1<<endl;  
auto var3=45; //var3 is now a variable, not a lambda function.
cout<<var3<<endl; //var3 function can no longer be called 
end();

//Capture Lists
int var4=56;
auto fn = [var4](){ //pass by value for the lambda function
    cout<<var4<<" "; //Since var 4 is not a parameter, instead it's passed using the capture list, it is read only by the function. 
};
auto fn1 = [&var4](){ //pass by reference for the lambda function
    cout<<var4<<" "; //Since var 4 is not a parameter, instead it's passed using the capture list, it is read only by the function. 
};
for(size_t i=0; i<5; i++){
    
    var4++; //functions holds the value of var4 that was defined at the time of the function creation.
}
fn();
cout<<endl;
fn1();//var 4 is passed by reference, hence it can be modified.

[var4,var1](){ //multiple capture is possible 
    cout<<endl<<var4+var1<<endl;
 }();
[=](){
    cout<<var4+var1+var3<<endl; //all variables are passed by value 
}();
[&](){
    cout<<var4+var1+var3<<endl; //all variables are passed by reference
}();
end();


//Function Template
cout<<pdt(5,10)<<" "<<pdt(5.2,22.6)<<endl; 
cout<<pdt<double>(4,23.6)<<endl; // we can explicitly define the function type which also allows us to use different data type within the same call. 
cout<<quo(x1,y)<<endl;
double *a{&x1}, *b{&y1},*c{};
c= pdt(a,b);
cout<<*c<<endl;
*a=3.141; 
cout<<*pdt(b,a)<<endl;
end();











}
/*In order to get an output from a function we can simply pass another variable by reference or by pointers 
so that the varaible has a perma change. This allows us to get output even with void functions. 
reference is preferred over pointers for cpp

inputs on the other hand should be sued with const 
This is to make sure that input parameters are not modifiable inside a function*/

void printf(){ //function definition can be done after main
    string hello{"hello world"};
    uppercase(hello);
    std::cout<<"hello world"<<endl<<"Nested Function: "<<hello<<endl; 
    
}
int max(int a, int b){
    if(a>b)
    return a; //there can be multiple return statements in a function, but ONLY ONE return will run. 
    else return b;
}
int min(int a, int b){
    if(a<b)
    return a; 
    else return b;
}
int inc_multiply(int a, int b){
    return ((++a)*(++b));
}
int reference(int& a){
    a+=10;
    cout<<&a;
   return a;
}
int pointer(int* a){
    *a+=10;
    cout<<&a;
   return *a;
}
void lowercase(string input, string &output){
    for(int i=0; i<input.length(); i++){
        if(input[i]==' ') continue; 
    output[i]=input[i]+32;
    }
}
void uppercase(string &input){

    for(int i=0; i<input.length(); i++){
        if(input[i]==' ') continue; 
    input[i]=input[i]-32;
    }
}
string addstr(string a, string b){
    string c;
    c=a+b;
    return c;
}
double max(double a, double b){
    if(a>b)
    return a; //there can be multiple return statements in a function, but ONLY ONE return will run. 
    else return b;
}
double min(double a, double b){
    if(a<b)
    return a; 
    else return b;
}

template <typename T> 
T pdt(T a, T b){ //The 'T' here acts like auto. 
    return a*b;
}

template <typename T, typename F> 
T& quo(T &a, F &b){
    if (b==0){
        cout<<"Error: Division by zero is not allowed."<<endl;
        return a; // Return 0 or handle the error as needed
    }
    a =a/b;
    return a;
}

template <> double* 
pdt<double*> (double* a, double *b){
    double *c = new double;
    *c = (*a) * (*b);
    return c;
}











