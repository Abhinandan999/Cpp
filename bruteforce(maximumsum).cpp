#include<iostream>
using namespace std;

int main(){

int n=5;
int arr[5]={1,2,3,4,5};
int currentsum=0;
int maxSum=INT_MIN;

for(int i=0;i<n;i++){
    for(int j=i;j<n-1;j++){
        currentsum += arr[j];
        maxSum = max(currentsum, maxSum);
    }
    cout<<endl;
}
cout<<"Maximum sum is: - "<<maxSum<<endl;
return 0;

}