#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for square pattern:- "<<endl;
    cin>>n;

cout<<endl;
 cout<<"Stars:- "<<endl;
    for(int i=1;i<=n;i++){
      
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

cout<<endl;
 cout<<"Numbers"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

cout<<endl;
cout<<"Numbers with series:- "<<endl;
int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

     cout<<endl;
      cout<<"Inverted with series:-"<<endl;
int num2=n*n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num2<<" ";
            num2--;
        }
        cout<<endl;
    }

cout<<endl;
cout<<"Alphabetical series:- "<<endl;
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
cout<<endl;
cout<<"Alphabetical Inverted series:- "<<endl;
    char ch2 =64+(n*n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch2<<" ";
            ch2--;
        }
        cout<<endl;
    }

}