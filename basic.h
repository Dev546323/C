int add(int a, int b); //declaration and definition can be in diff files but i don't wanna bother with it rn. 
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b); 
double add(double a, double b); 
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int add(int a, int b, int c, int d);


auto var3 = [](int a, int b) { return a + b; }; // lambda function



/*
Function overloading is done based on the PARAMETERS
Changing order of the parameters
The number of parameters
The type of parameters
*/

int add(int a, int b){ //declaration and definition can be together as well. 
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    if(b==0){
        std::cout<<"Error: Division by zero is not allowed."<<std::endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a/b;
}
double add(double a, double b){
    return a+b;
}
double subtract(double a, double b){
    return a-b;
}
double multiply(double a, double b){
    return a*b;
}
double divide(double a, double b){
    if(b==0){
        std::cout<<"Error: Division by zero is not allowed."<<std::endl;
        return 0; // Return 0 or handle the error as needed
    }
    return (double)a/b;
}
int add(int a, int b, int c, int d){
    return a+b+c+d;
}
int add(int a, int b, int c){
    return a+b+c;
}







 