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
    unique(arr1,size);

return 0;
}

int unique(int arr[],int size){

  cout<<"Unique elements are:- "<<endl;
    for(int i = 0 ; i < size ;i++){
    
     for(int j=0;j<size;j++){

        if(i!=j && arr[i]==arr[j]){
         return 0;
        }
        else{
            return i;
        }

    }
}


}