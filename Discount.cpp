/*It's the sale season again and Chef bought items worth a total ofX rupees. The sale season offer is as follows:
if≤100X≤100, no discount.if 
100≤
1000
100<X≤1000, discount is 
25
25 rupees.
if 
1000<X≤5000, discount is 100 rupees.if >5000X>5000, discount is 500 rupees.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cout<<"Enter the number of taste cases:"<<endl;
 cin>>T;
for(int i=0;i<T;i++) 
{
    int x;
    cout<<"Enter the payment in Rupee:"<<endl;
    cin>>x;
    if(x<=100){
        cout<<x<<endl;
    }else 
    if(100<x && x<1000){
        cout<<x-25<<endl;
    }
    else 
    if(1000<x && x<=5000){
        cout<<x-100<<endl;
    }
    else
    {
        cout<<x-500<<endl;
    }
}
}
