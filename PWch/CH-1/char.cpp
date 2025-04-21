#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character: ";
    cin>>x ;
    cout<< "Enter a integer: ";
    int y;
    cin>>y;
    float z;
    cout<<"Enter a real number: ";
    cin>>z;
    z = (int)z;
    cout<<"ASCII value of "<<x<<" is "<<(int)x <<endl <<"character of the asci value is"<<y<<" is "<<(char)y <<endl <<"character of the asci value is "<<z<<" is "<<(char)z;
    return 0;
    
}