// WAP to print the multiplication table of a number, entered by the user.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Number to calulate Table: ";
    cin>>num;

    for (int i = 1 ; i <= 10 ; i++) {
        int result = i*num;
        cout<<num<<" X "<<i<<" = "<<result<<endl;
    }

    return 0;
}