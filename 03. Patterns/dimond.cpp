#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;

    // 1st Pyramid

    for(int i=1;i<=num;i++){
        // spaces
        for(int j=1;j<=num-i;j++){
            cout<<" "<<" ";
        }
        // stars
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // 2nd Pyramid

    for(int i=num;i>=1;i--){

        // spaces
        for(int j=1;j<=num-i;j++){
            cout<<" "<<" ";
        }

        // star
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    return 0;
}