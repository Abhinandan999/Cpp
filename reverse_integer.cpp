#include<iostream>
using namespace std;

int reverse(int n){

int rev;
int lastgig=0;

while(n>0){

    lastgig=n%10;
    n=n/10;
   cout<<lastgig;
}
cout<<endl;
return 0;
}

int main(){
    int n;
    cout<<"Enter the number:- "<<endl;
    cin>>n;
   
    cout<<"The reversed number is:-  ";
    cout<< reverse(n)<<endl;
    
}