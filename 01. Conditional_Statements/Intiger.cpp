//  Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

#include<iostream>
using namespace std;

int main (){

    int num;

    cout<<"Enter The number to check even or odd: "<<endl;
    cin>>num;

    if (num > 0) {
        cout<<num<<" is a positive Intiger"<<endl;
    }

    else if (num < 0) {
        cout<<num<<" is a Neagtive intiger"<<endl;
    }

    else {
        cout<<"Enter Valid Intiger"<<endl;
    }

    return 0;
}