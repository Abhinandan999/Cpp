/*In a coding contest, there are two types of problems:
Easy problems, which are worth 1 point each hard problems,
which are worth 2 points each To qualify for the next round, a contestant must score at least 
X points. Chef solved A Easy problems and B Hard problems. Will Chef qualify or not?
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cout<<"Enter the number of test cases:"<<endl;
cin>>T;
for(int i=1;i<=T;i++){
    int A,B,C;
    cout<<"Enter the total Marks,Easy Problems,Hard problems Respectively:"<<endl;
    cin>>A>>B>>C;
    
    int m,n;
    m=B;
    n=2*C;
if(A<=m+n){
    cout<<"Qualify"<<endl;
}else{
    cout<<"NotQualify"<<endl;
}
    
}
}
