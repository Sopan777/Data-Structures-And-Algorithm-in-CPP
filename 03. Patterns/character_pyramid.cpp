// A 
// B C 
// D E F 
// G H I J

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;

    char character='A';

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<character<<" ";
            character++;
        }
        cout<<endl;
        
    }
    return 0;
}