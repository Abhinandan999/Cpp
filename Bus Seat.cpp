/*There are two exits in a bus with 100 seats:First exit is located beside seat number ,
Second exit is located beside seat number 100
Seats are arranged in a straight line from 
1 to 100 with equal spacing between any 2 adjacent seats.
Determine the exit taken by passenger sitting on seat X. */

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cout<<"Enter number of test cases:"<<endl;
cin>>T;
for(int i=1;i<=T;i++){
    int x;
    cout<<"Enter the number of seat on which person wants to go:"<<endl;
    cin>>x;
    if(x<=50){
        cout<<"LEFT"<<endl;
        
    }else{
        cout<<"RIGHT"<<endl;
    }
}

}
