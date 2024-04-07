/*For each bill you pay using CRED, you earn �X CRED coins.
At CodeChef store, each bag is worth 100
100 CRED coins.*/

Chef pays 
�
Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

#include <bits/stdc++.h>
using namespace std;

int main() {
   int T,x,y;
   cout<<"Enter the test cases:"<<endl;
   cin>>T;//T=Test cases
   for(int i=1;i<=T;i++)
   {    cout<<"Enter the no.of bills &  points :";
       cin>>x>>y;
       int m=x*y;
       int z=m/100;
       cout<<"The no. of bags is :";
       cout<<z<<endl;
   }

}
