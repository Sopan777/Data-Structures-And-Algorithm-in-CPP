#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;
    
    // pattern 1

    for(int i=1;i<=num;i++){

        // stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }

        // spaces
        for(int j=1;j<=2*(num-i);j++){
            cout<<" "<<" ";
        }

        // stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;        
    }
    // pattern 2  
    for(int i=num;i>=1;i--){

        // stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }

        // spaces
        for(int j=1;j<=2*(num-i);j++){
            cout<<" "<<" ";
        }

        // stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}