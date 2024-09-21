#include<iostream>
using namespace std;

int main(){

int size;
int marks[size];

cout<<"Enter size of an array:- "<<endl;
cin>>size;

cout<<"Enter marks :-"<<endl;

for(int i=0;i<=size-1;i++){

    cin>>marks[i];
}

int size1;

size1=sizeof(marks)/sizeof(int);

cout<<"Size is:- "<<size1;

return 0;


}