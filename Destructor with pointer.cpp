/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
      ~rectangle(){
        cout<<"Yup its deleted "<<endl;
    }
    
 
};
    
   

int main()
{

   rectangle *a =new rectangle();
  
   cout<<a->l<<"-"<<a->b<<"(Here we used the pointer to call constructor and delet for calling the destructor )"<<endl;
    delete a;// delete is only used for pointers,because of delet it calls the destructor//
    
    int m,n;
    cout<<endl;
    cout<<"Enter m:-"<<endl;
    cin>>m;
    
    cout<<"Enter n:-"<<endl;
    cin>>n;
    cout<<endl;
    
    rectangle para(m,n);
    cout<<para.l<<"--"<<para.b<<"(This is Parameterised Constructor)"<<endl<<endl;

   rectangle copy(para);
   cout<<copy.l<<"---"<<copy.b<<"(This is Copy Constructor)"<<endl;
    cout<<endl;
    
    cout<<"destructor arrives here :"<<endl;
    return 0;
    
}
