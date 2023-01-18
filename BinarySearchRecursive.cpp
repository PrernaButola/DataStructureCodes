#include<iostream>
using namespace std;

int binarySearch(int arr[],int x,int low,int high){
	if(high>=low){
		int mid= low+(high-low)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
			return binarySearch(arr,x,low,mid-1);
		return binarySearch(arr,x,mid+1,high);
	}
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
	int result= binarySearch(arr,x,0,n-1);
	if(result==-1)
		cout<<"Not found";
	else
		cout<<"Element is found at index "<<result;
	return 0;
}