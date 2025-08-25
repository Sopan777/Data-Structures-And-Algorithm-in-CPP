// * * * * 
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;

    // int numm=num;  // alternate method

    for(int i=1;i<=num;i++){

        // for(int j=1;j<=numm;j++){   // alternate method
        for(int j=1;j<=(num-i+1);j++){

            cout<<"*"<<" ";
        }
        cout<<endl;
        // numm = numm-1;   // alternate method
    }

    return 0;

}
