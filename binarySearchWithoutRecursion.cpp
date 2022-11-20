/*
 *@Author - Harshit Srivatava
 *Problem: Implement binary search for a sorted array without using recursion. 
 */

#include<iostream>
using namespace std;

int binarysearch(int *arr,int lb,int ub,int target) {
	int mid;
	int count=0;
	int size=ub+1;
	while(ub>=lb) {
		mid=(ub+lb)/2;
		if(arr[mid]==target) {
			cout<<"Found value at index : "<<mid<<endl;
			count++;
			for(int index=mid-1; index >= 0 && arr[index] == target; index--) {
				cout<<"Found value at index : "<<index<<endl;
				count++;
			}
			for(int index=mid+1; index < size && arr[index] == target; index++) {
				cout<<"Found value at index : "<<index<<endl;
				count++;
			}
			return count;
		}
		else if(target<arr[mid]) {
			ub=mid-1;
		}
		else {
			lb=mid+1;
		}
	}
	return count;
}
		
int main() {
	int size,target;
	cout<<"Enter the size = ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements:\n";
	for(int index =0;index<size;index++) {
		cin>>arr[index];
	}
	cout<<"Enter the element you searching for : ";
	cin>>target;
	int status;
	status=binarysearch(arr,0,size-1,target);
	if(status==0)
		cout<<"\nElement does not exist.\n";
	else 
		cout<<"No. of instances = "<<status<<endl;
	return 0;
}

