/* In this code we have to give number of bytes,if byte is in multiple of 4 then 
it becomes give output as Good otherwise it prints Not good*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cout<<"Enter the number of cases:"<<endl;
 cin>>T;
 for(int i=1;i<=T;i++){
     int x;
     cout<<"Enter the number of byte:"<<endl;
     cin>>x;
     if(x%4==0){
         cout<<"GOOD"<<endl;
     }else{
     
      cout<<"Not Good"<<endl;    
     }
     
 }

}
