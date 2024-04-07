/* In this example if soldure have even number of weapons then he will ready otherwise he will not ready*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cout<<"Enter the number of soldures:"<<endl;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
	    int A;
	    cout<<"Enter the number of weapons in hand of soldures:"<<endl;
	    cin>>A;
	    if(A%2==0){
	        cout<<"Ready for Battle"<<endl;
	    }
	    else
	    cout<<"NOT READY"<<endl;
	  
	}
}