#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int arr[10];
 int n;
 
 cout<<"Enter the number:- "<<endl;
 cin>>n;
 cout<<"Enter the numbers : -" <<endl;
 for(int i=0;i<n;i++){
 cin>>arr[i]; 
 }
 
 cout<<"Numbers entered :- "<<endl;
 for(int i=0;i<n;i++){
 cout<<arr[i]<<endl;
 
 }
 
  cout<<"Numbers Reversed :- "<<endl;
 for(int i=n-1;i>=0;i--){
 cout<<arr[i]<<endl;
 
 }
 
    return 0;
}
