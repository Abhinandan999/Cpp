/*Recently Chef joined a new company. In this company, the employees have to work for �
X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for 
Y hours (Y<X) on Friday. Saturdays and Sundays are holidays.*/
#include<iostream>
using namespace std;

int main(){
    int T,a,b,c;
    cout<<"Enter the no. of cases"<<endl;
cin>>T;
 for(int i=1;i<=T;i++){
     cout<<"Enter the no. of hours and hours in friday:"<<endl;
     cin>>a>>b;
     //a=no. hours in day & b=hours in friday
     c=a*4;
     
     int m=c+b;
     cout<<"Total work in week is:-"<<endl;
     cout<<m<<endl;
 }
    
}