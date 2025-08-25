// WAP to input a number and check whether the number is an Armstrong number or not. 
// An Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<iostream>
using namespace std;

int main(){
    int num;
    int amstrong;

     cout<<"Enter a number to tell weather it is Armstrong number: "<<endl;
    cin>>num;

    while(num > 0 ){
        int last_digit = num % 10;
        amstrong += last_digit*last_digit*last_digit;
        num /= 10;
    }

    if (amstrong == num) {
        cout<<num<<" is a amstrong number."<<endl;
    }

    else {
        cout<<num<<" is not a amstrong number."<<endl;
    }

    return 0;
}