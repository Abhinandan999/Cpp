#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float a,b,c,d,n;
   
   cout<<"Enter no of times :"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)

 { cout<<"Enter A"<<endl;
	cin>>a;
	cout<<"Enter B"<<endl;
	cin>>b;
	cout<<"Enter C"<<endl;
	cin>>c;

 d=(a+b)/2;
 
   if(d>c){
            cout<<"Yes"<<endl;
           }
else{
        cout<<"No"<<endl;
}

}

}