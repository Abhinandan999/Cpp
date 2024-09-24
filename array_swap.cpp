#include<iostream>
using namespace std;

int  swap(int arr[],int size){

int min=INT_MAX;
int max=INT_MIN;
int i,j;


     for(  i=0;i<size ;i++){

    if( arr[i] < min){

        min = arr[i];
    }
    }

    for( j=0;j<size ;j++){
    if( arr[j] > max){
     max = arr[j];
    }  
  
}

for( i=0;i<size;i++){

    if(arr[i]==min){
       return i;
    }
    if(arr[i]==max){
       return j;
    }

}

}

int main(){

 

  int size=6;
    int arr[size];
    cout<<"Enter size:- "<<endl;
    cin>>size;
    cout<<"Enter elements:- "<<endl;

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

swap(arr[size],size);

return 0;
}