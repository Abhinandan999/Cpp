#include<iostream>
using namespace std;

int main(){

    int size=6;
    int arr[size];
    cout<<"Enter size:- "<<endl;
    cin>>size;
    cout<<"Enter elements:- "<<endl;

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }


    int sum=0;
    int mul=1;

    for(int i=0 ; i<size ; i++){
        sum+=arr[i];
        mul*=arr[i];
    }
    
    cout<<endl<<endl;

    cout<<"Sum of elements:- "<<sum<<endl;
    cout<<"Multiplication of elements:- "<<mul<<endl;

    return 0;
}