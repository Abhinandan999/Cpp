#include<iostream>
#include<iomanip>
using namespace std;

class queue{
	private:int array[10],front ,rear;
	int size,i;
	
	public:
		void elements(){
			rear=0;
			cout<<"Enter the size of Queue:"<<endl;
			cin>>size;
			cout<<"Enter the elements of Queue: "<<endl;
		  for(i=0;i<size;i++)
		  {
		  	cin>>array[i];
		  	rear=i;
		  	front=0;
	      }
		}
	
	    void enqueue(){
	    	int new_ele;
			cout<<"Enter the elements to be enque:"<<endl;
	    	cin>>new_ele;
	    	
	    	if(rear==9){
	    		cout<<"Queue become overflow!!!"<<endl;
			}
			else
			rear++;
			size++;
	    	array[rear]=new_ele;
		}  
	    void dequeue(){
	    	if(rear==front==-1){
	    		cout<<"Queue become Underflow!!!"<<endl;
			}
			else
			front++;
			
		}
	    void display(){
	    	
	    	for(i=front;i<size;i++)
		   
		    cout<<array[i]<<setw(10);
		}
		void menu()
	    {
	    	int option;
	    	 while(1)
	    	 {
	    	 	cout<<"\n Enter the operation to be done: \n 1)Enqueue \n 2)Dequeue \n 3)Display \n ";
	    	 	cin>>option;
	    	 	if(option<4)
	    	 	
	    	 	
	    	 	{
	    	 		switch(option)
	    	 		{
	    	 			case 1:
						 {  enqueue();
							break;
						 }
					
	    	 			case 2:
						 {
						 	dequeue();
						 	break;
						 }
	    	 			case 3:{
	    	 				display();
							break;
						 }
	    	 			
					 }
				 }
		   }
		}
};
int main(){
   queue a;
   a.elements();
   a.menu();
    
}
