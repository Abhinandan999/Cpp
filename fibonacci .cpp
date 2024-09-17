#include<iostream>
using namespace std;

// using recursion

int fib(int x){

    if(x==0)
        return 0;
    
     if(x==1)
        return 0;
    
    if(x==2)
    return 1;

    return fib(x-1) + fib(x-2);
}

int main(){

    int x;
    cout<<"Enter the number:-"<<endl;
    cin>>x;

cout<<fib(x);
    return 0;
}