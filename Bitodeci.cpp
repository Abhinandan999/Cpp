#include<iostream>
using namespace std;

int main(){

int binum;
int ans=0;
int pow = 1;
int rem;
cout<<"Enter the binary  number:- "<<endl;
cin>>binum;

while(binum>0){
    rem=binum%10;
ans+=rem*pow;
//Updation steps:->
binum=binum/10;
pow=pow*2;
}
cout<<ans;

    return 0;

}