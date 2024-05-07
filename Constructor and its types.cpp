
#include <iostream>
#include<iomanip>
using namespace std;

class rectangle{
  public:
    int l;
    int b;
    //Constructors:-
    
    rectangle(){            // This is Default Constructor         
        l=0;
        b=0;
    }
    rectangle(int m,int n){          // This is Parameterised Constructor
        l=m;
        b=n;
    }
    rectangle (rectangle& r){           // This is copy Constructor
        l=r.l;
        b=r.b;
        
    }
};

int main()
{

   rectangle a;
  
   cout<<a.l<<"-"<<a.b<<endl;
    int m,n;
    
    cout<<"Enter m:-"<<endl;
    cin>>m;
    
    cout<<"Enter n:-"<<endl;
    cin>>n;
    rectangle para(m,n);
    cout<<para.l<<"--"<<para.b<<endl;

   rectangle copy(para);
   cout<<copy.l<<"---"<<copy.b<<endl;
    return 0;
}
