// * * * * * 
// *       *
// *       *
// * * * * *

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<"*"<<" ";
        for(int j=1;j<=num-1;j++){
            if(i == 1 || i == num){
                cout<<"*"<<" ";
            }

            else{
                cout<<" "<<" ";
            }
        }
        cout<<"*"<<" ";
        cout<<endl;
        
    }
    return 0;
}