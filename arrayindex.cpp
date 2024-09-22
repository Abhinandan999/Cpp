#include<iostream>
using namespace std;

int main(){

int smallest = INT_MAX ;//INT_MAX is largest positve number in c++
int largest = INT_MIN;//INT_MAX is smallest negative     number in c++
int size,n=1 ;

size=n;

int nums[n] ;
cout<<"Enter size:- "<<endl;
cin>>n;

cout<<"Enter numbers in arry:- "<<endl;
for( int j = 0; j < n ; j++ ){
    cin>> nums [ j ];

}

//smallest
for( int i = 0 ; i < n ; i++ ){

    if( nums [i] < smallest ){
        smallest = nums[i];

    }
}

for(int i = 0; i < n ; i++){
    if(nums[i] == smallest){
        cout<<"Index is : -"<<i<<endl;;
    }
    break;
}

cout<<"Smallest number is:- "<<smallest;
//cout<<smallest=nums[i];



return 0;
}
