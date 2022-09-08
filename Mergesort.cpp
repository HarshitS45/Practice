#include<iostream>
using namespace std;


print(int arr[],int size)	
{
	cout<<"Sorted array = {";
	for(int index=0;index<size;index++)
	{
		cout<<arr[index];
		if(index<size-1)
		{
			cout<<",";
		}
	}
	cout<<"}";
	cout<<"\n";
}


merge(int arr[],int lb,int mid,int ub)
{
	int temp[ub+1];
	int startL = lb;
	int startR = mid+1;
	int start = lb;
	int end=ub;
	while(startL<=mid && startR<=end)
	{
		if(arr[startL]<arr[startR])
		{
			temp[start]=arr[startL];
			startL++;
			start++;	
			
		}
		else
		{
			temp[start]=arr[startR];
			startR++;
			start++;
		
		}
	}
	if(startL>mid)
	{
		while(startR<=end)
		{
			temp[start]=arr[startR];
			startR++;
			start++;
			
		}
	}
	else
	{
		while(startL<=mid)
		{
			temp[start]=arr[startL];
			startL++;
			start++;
		}
	}
	for(start=lb;start<=ub;start++)
	{
		arr[start]=temp[start];
	}
}


mergesort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}


main()
{
	int size;
	cout<<"Enter the size of the array = ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" elements:\n";
	for(int index=0;index<size;index++)
	{
		cin>>arr[index];
	}
	mergesort(arr,0,size-1);
	print(arr,size);
}
