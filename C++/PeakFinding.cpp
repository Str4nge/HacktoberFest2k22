#include <iostream>

using namespace std;

int peak(int arr[], int s, int l){

	int mid=(s+l)/2;

	if((l-s)==0){
		return arr[mid];
	}

	if((l-s)==1){
		return max(arr[s],arr[l]);
	}

	if(arr[mid+1]>arr[mid]){
		return peak(arr,mid,l);
	}

	return peak(arr,s,mid);

}

int main(){

	int n=7;
	int arr[n]={1,2,1,3,5,6,4};

	cout<<peak(arr,0,n-1);

}