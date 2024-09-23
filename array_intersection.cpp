#include<iostream>
using namespace std;

int main(){

    int size=6;
    int arr1[size];
    cout<<"Enter size of 1 st array :- "<<endl;
    cin>>size;
    cout<<"Enter elements of 1 st array :- "<<endl;

    for(int i = 0;i<size;i++){
        cin>>arr1[i];
    }

    int size2=6;
    int arr2[size2];
    cout<<"Enter size of 2 st array :- "<<endl;
    cin>>size2;
    cout<<"Enter elements of 2 st array :- "<<endl;

    for(int i = 0;i<size;i++){
        cin>>arr2[i];
    }

    cout<<"Intersection elements are:- "<<endl;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){

        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
        }

    }
}


return 0;
}