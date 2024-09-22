//Here we using approch of swap(2Pointer approach)

#include<iostream>
using namespace std;


void swap(int arr[],int size){
int start=0;
int end=size-1;

while(start<end){

    swap(arr[start],arr[end]);//swap is inbuild in c++ to swap the functuions 
    start++;
    end--;
}
}

int main(){

int size=9;
int arr[]={1,2,3,4,5,6,7,8,9};

cout<<"Reverse of arry is:- "<<endl;

swap(arr,size) ;
for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}