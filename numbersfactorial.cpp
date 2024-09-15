//here we have to find factorial of all number
#include<iostream>
using namespace std;

int main(){
int n,mul=1;

cout<<"Enter the number we have to find factorial of all number:- "<<endl;
cin>>n;

for(int i=1;i<=n;i++){
    
        mul=mul*i;
    
}

cout<<"The factorial of numbers is:- "<<mul<<endl;

cout<<"(//we have to got factorial of all number)"<<endl;

}