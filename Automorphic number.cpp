
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    
    int b=a*a;
    
    cout<<"The square of given number is :"<<endl;
    cout<<b;
    cout<<endl;
    
    if(b%10==a){
        cout<<"This number is Automorphic"<<endl;
    }
  else 
  cout<<"This is not a Automorphic number"<<endl;
    
    
    return 0;
}
