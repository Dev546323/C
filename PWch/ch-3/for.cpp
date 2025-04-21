#include <iostream>
using namespace std; 
int main() {
    int g,j;
    cout<<"enter a number: ";
    cin>>g;
    j=g;
    for (g;g>0;g--){
        cout<<"killme"<<g<<endl;
    }
    for (g;g<=j;++g){
        cout<<"killme"<<g<<endl;
    }
    return 0;
}
//steps- 
// 1. check the condition, if it is true, execute the task, if not, exit the loop
// 2. follow loop command
// 3. increment/decrement