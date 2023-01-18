#include<iostream>
#include<Math.h>
using namespace std;

int binarySearch(int arr[],int x,int n){
	int step= sqrt(n);
	int prev=0;
	while(arr[min(step,n)-1]<x){
		prev=step;
		step += sqrt(n);
		if(prev>=n)
			return -1;
	}
	while(arr[prev]<x){
		prev++;
		if(prev==min(step,n))
			return -1;
	}
	if(arr[prev]==x)
		return prev;
	return -1;
}
int main(){
	int n,x;
	cout<<"Enter no. of elements: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element which you want to found: ";
	cin>>x;
	int result= binarySearch(arr,x,n);
	if(result==-1)
		cout<<"Not found";
	else
		cout<<"Element is found at index "<<result;
	return 0;
}