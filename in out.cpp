/*Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.
Given the decision of the 4 referees, help Chef determine whether the ball is considered inside limits or not.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
   int T;
   cin>>T;
   for(int i=1;i<=T;i++)
   {
       int R1,R2,R3,R4;
       cin>>R1>>R2>>R3>>R4;
       if(R1==0 && R2==0 && R3==0 && R4==0){
         
           cout<<"In"<<endl;
           }else
       cout<<"OUT"<<endl;
   }

}
