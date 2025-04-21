#include<iostream>
using namespace std;
int main(){
    int x[2][3];

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"enter a number: ";
    //         cin>>x[i][j];
    //     }
    // }

    for(int i=0;i<3;i++){ //vertical 
        //switch the 3
        for(int j=0;j<2;j++){ //horizontal 
            //switch the 2

           // cout<<x[j][i]<<" "; //switch the i and j 

            //all combined switches changes the orientation of the array 
           
        }
        cout<<endl;
    }
    //see the changes in the 2 below to understand the orientation of the array

    int y[][3]= {{1,2,3},{4,5,6},{7,8,9},{4,5,6}};//filling the number of ROWS IS NECESSARY
    int q=(sizeof(y)/sizeof(y[0]));
    int w=(sizeof(y[0])/sizeof(y[0][0]));
    for(int i=0;i<q;i++){
        for(int j=0;j<w;j++){
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<q<<" "<<w<<endl<<endl;

    int u[][3]={1,2,3,4,5,6,7,8,9,1,2,3};
    for(int i=0;i<w;i++){
        for(int j=0;j<q;j++){
            cout<<u[i][j]<<" ";
        }
        cout<<endl;
    }
    
}