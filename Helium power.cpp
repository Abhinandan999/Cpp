/* In this example we are finding the sourse of helium on moon is supplimentory or not*/



#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cout<<"Number of Cases:"<<endl;
cin>>T;
for(int i=1;i<=T;i++){
    int x,y,A,B,m,n;
    cout<<"Enter the Gram of Helium:"<<endl;
    cin>>A;
     cout<<"Enter the power by per Gram of Helium:"<<endl;
     cin>>B;
     cout<<"Enter the total helium (in Gram) on moon:"<<endl;
     cin>>x;
     cout<<"Enter the power per gram of helium on moon:"<<endl;
     cin>>y;
     
    n=x*y;
    m=A*B;
    
    if(n>=m){
        cout<<"YES"<<endl;
        
    }
    else
    cout<<"NO"<<endl;
    
}
return 0;
}
