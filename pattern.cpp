#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int x;
    cout<<"Enter number:-";
    cin>>x;
int n=x;
for(int i=1;i<=n;i++){

    for(int j=i;j<n;j++){
        cout<<" ";
    }
    for(int j=1;j<=(2*i-1);j++){
        cout<<"*";
    }
    cout<<endl;
}
}