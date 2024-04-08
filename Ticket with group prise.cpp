#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int n,a,b,c,d;
    cout<<"Enter no. of times:"<<endl;
    cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Enter the no. of students:"<<endl;
    cin>>a;
    cout<<"Enter the ticket rate:"<<endl;
    cin>>b;
    
    c=(a/6);
    if(a%6==0)
    {
    d=c*b;
    }
    else d=(c+1)*b;
    cout<<d<<endl;
}
}

