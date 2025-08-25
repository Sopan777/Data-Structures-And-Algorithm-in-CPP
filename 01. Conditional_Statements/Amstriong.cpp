// For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits. 
// Eg : 371 is an armstrong number. 3*3*3 + 7*7*7 + 1*1*1 = 371

#include<iostream>
using namespace std;

int main(){

    int num;
    int armstrong;

    cout<<"Enter a number to tell weather it is Armstrong number: "<<endl;
    cin>>num;

    int first_digit = num / 100;
    int second_digit = (num % 100) / 10 ;
    int third_digit = num % 10;

    armstrong = (first_digit*first_digit*first_digit)+(second_digit*second_digit*second_digit)+(third_digit*third_digit*third_digit);

    if (armstrong == num) {
        cout<<num<<" is a amstrong number."<<endl;
    }

    else {
        cout<<num<<" is not a amstrong number."<<endl;
    }

    return 0;
}