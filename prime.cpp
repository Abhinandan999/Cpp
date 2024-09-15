#include<iostream>
using  namespace std;

int main(){
     int n;

     cout<<"Enter number:- "<<endl;
     cin>>n;

    for(int i=2;i<(n-1);i++){

        if(n%i==0){
            cout<<n<<"Not a prime"<<endl;
        }
        else{
            cout<<n<<"is a Prime number"<<endl;
        }

    }
     
     return 0;
}