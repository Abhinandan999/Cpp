#include<iostream>
using namespace std;

double binomial(int n,int r){

int nfact;
int rfact;
int diff;
int store;

 nfact=1;
    for(int i=1;i<=n;i++){
        nfact*=i;
    }
    
 rfact=1;
    for(int j=1;j<=r;j++){
        rfact*=j;
    }
   
 diff=1;
    for(int k=1;k<=(n-r);k++){

        diff*=k;
    }

    store=(nfact)/(rfact*diff);

    return store;


}

int main(){

int n,r;

cout<<"Enter n:-"<<endl;
cin>>n;

cout<<"Enter r:-"<<endl;
cin>>r;

cout<<"The binomial coefficent is :- "<<binomial(n,r);

return 0;

}