/*
Chef hosts a party for his birthday. There are N people at the party. All these N people decide to play Jenga.
There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.
The game is valid if:
1)All the players have a tile in each round;
2)All the tiles are used at the end.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cout<<"Enter the number of test cases:"<<endl;
cin>>T;
for(int i=1;i<=T;i++)
{
int x,y;
cout<<"Enter the number of peoples and the game toy respectively:"<<endl;
cin>>x>>y;

if(y%x==0){
    cout<<"YES"<<endl;
}else{
    cout<<"No"<<endl;
}
}
    
}