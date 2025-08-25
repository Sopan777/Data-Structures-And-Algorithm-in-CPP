//       * 
//     * *
//   * * *
// * * * *

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number to make a pattern: ";
    cin>>num;

    for(int i=1;i<=num;i++){
        // for printing SPACES
        for(int j=1;j<=num-i;j++){
            cout<<" "<<" ";
        }
        // for printing stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    return 0;
}  