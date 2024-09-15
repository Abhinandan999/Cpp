#include<iostream>
using namespace std;

int main(){
int x=0;
int n;
cout<<"Enter the number:- "<<endl;
cin>>x;
n=x;

for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        cout<<"*";
    }
     cout<<endl;
}

}