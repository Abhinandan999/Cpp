/* A single car can accommodate at most 4 people.N friends want to go to a restaurant for a party.
Find the minimum number of cars required to accommodate all the friends.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cout<<"Enter the number of test cases:"<<endl;
cin>>T;
for(int i=1;i<=T;i++){
    int x;
    cout<<"Enter the number of peoples:"<<endl;
    cin>>x;
    if(x%4==0){
        cout<<""<<x/4<<endl;
    }else{
        cout<<(x/4)+1<<endl;
    }
}

}
