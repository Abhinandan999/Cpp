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


cout<<"Same numbers(column wise):- "<<endl;

for(int i=1;i<=n;i++){
    for(int j=1;j<(i+1);j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;

cout<<"Same column series(Reverse Triangle):- "<<endl;

for(int i=1;i<=n;i++){

    for(int j=i+1;j>0;j--){
            cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;


cout<<"Floyd's Triangle pattern :- "<<endl;

int num2=1;

for(int i=1;i<=n;i++){

    for(int j=1;j<i+1;j++){
            cout<<num2<<" ";
            num2++;
    }
    cout<<endl;
}
cout<<endl;


}