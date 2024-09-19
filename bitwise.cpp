#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the number(a):- "<<endl;
    cin>>a;
    
    cout<<"Enter the number(b):- "<<endl;
    cin>>b;

cout<<endl;
    cout<<"Bitwise and of a and b is:- "<<(a & b)<<endl;
    
    cout<<"Bitwise or of a and b is:- "<<(a | b)<<endl;
    
    cout<<"Bitwise EXOR of a and b is:- "<<(a ^ b)<<endl;

    cout<<endl;

    int m,n,d;
    cout<<"Enter m"<<endl;
    cin>>m;
    cout<<"Enter n"<<endl;
    cin>>n;

cout<<"Choose left or right operator:-"<<endl;
cout<<" 1.left \n 2.right"<<endl;
cin>>d;
cout<<endl;
    if(d==1){

        cout<<"Left shift for "<<m<<" is:- "<<(a<<b)<<endl;

    }else{

        cout<<"right shift for "<<m<<" is:- "<<(a>>b)<<endl;
    }


    return 0;
}