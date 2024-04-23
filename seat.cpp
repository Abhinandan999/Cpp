/* In this example bus seats are arrenged in upper and 
lower dick .They are seprated by double and single Row as well.
by giving input number we want output as a seat position.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cout<<"Enter the number of tast cases:-"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
int a;
cout<<"Enter the seat number:-"<<endl;
cin>>a;
if(a>0 && a<11){
    cout<<"Lower Double "<<endl;
}else if(a>10 && a<16){
    cout<<"Lower Single"<<endl;
}else if(a>15 && a<26){
    cout<<"Upper Double"<<endl;
}else if(a>25 && a<31){
    cout<<"Upper Single"<<endl;
}
}
return 0;
}
