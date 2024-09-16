#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:- "<<endl;
    cin>>n;
    cout<<endl;

cout<<endl;
cout<<"Triangle(one side):-"<<endl;
cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
           cout<<endl;
    }


cout<<endl;
cout<<"Inverted triangle(one side):-"<<endl;
cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
           cout<<endl;
    }

cout<<endl;
cout<<"For Number"<<endl;
cout<<endl;

int num=1;

for(int i=1;i<=n;i++){
    for(int j=1;j<i+1;j++){

     cout<<num<<" ";
    num++;
    }
    cout<<endl;
}
cout<<endl;

cout<<endl;
cout<<"For same Number"<<endl;
cout<<endl;



for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){

     cout<<(i+1)<<" ";
    
    }
    cout<<endl;
}
cout<<endl;

cout<<endl;
cout<<"For same Alphabet"<<endl;
cout<<endl;

char ch='A';

for(char i='a';i<n;i++){
    for(char j=0;j<i+1;j++){

     cout<<(i+1)<<" ";
    
    }
    cout<<endl;
}
cout<<endl;

}