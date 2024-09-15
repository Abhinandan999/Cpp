//here we have to find sum of all number divisible by 3
#include<iostream>
using namespace std;

int main(){
int n,sum=0;

cout<<"Enter the number upto which you want sumof numbers divisible by 3:- "<<endl;
cin>>n;

for(int i=1;i<=n;i++){
    if(n%i == 0){
        sum+=i;
    }
}

cout<<"The sum of numbers is:- "<<sum<<endl;

cout<<"(//here we have to find sum of all number divisible by 3)"<<endl;

}