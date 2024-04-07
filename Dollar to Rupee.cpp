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
  int x;
    cout<<"Enter the payment in Dollar:"<<endl;
    cin>>x;
    
    int y=x*83.3;
    cout<<"The payment in Rupees is : ";
    cout<<y<<" Rs";

}
