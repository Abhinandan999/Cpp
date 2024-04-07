/*
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.
You are given three integers Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".*/
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cout<<"Enter the no. of test cases:"<<endl;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
     int b1,b2,b3;
     cout<<"Enter the botal 1,2,3 are full or not:"<<endl;//Representation 0=bottle is empty 1=bottle is full
     cin>>b1>>b2>>b3;
     if((b1&&b2||b3)==0||(b1&&b3||b2)==0||(b2&&b3||b1)==0)
     {
         cout<<"Water filling time"<<endl;
     }else
     cout<<"Not now"<<endl;
 }

}