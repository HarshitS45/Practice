/*
 * @Author - Harshit Srivastava
 * Problem: Binary search using recursion.
 */

#include<iostream>
using namespace std;

int binarysearch(int *arr,int lb,int ub,int target,int count)
{
		int mid=(lb+ub)/2;
		if(ub>=lb)
		{
			if(target==arr[mid])
			{
				count++;
				cout<<"Index position = "<<mid<<"\n";
				binarysearch(arr,lb,mid-1,target,count);		
				binarysearch(arr,mid+1,ub,target,count);
			
			}
			else if(target<arr[mid])
			{		
				binarysearch(arr,lb,mid-1,target,count);
			}
			else
               		{
	  			binarysearch(arr,mid+1,ub,target,count);
           		}

		}
		return count;

}

int main()
{
	int size,target;
	cout<<"Enter the size of the array = ";
	cin>>size;
	int array[size];
	cout<<"Enter the elements :\n";
	for(int index=0;index<size;index++)
	{
		cin>>array[index];
	}
	cout<<"Enter the element you are searching for :";
	cin>>target;
	int count=0;
	int status=binarysearch(array,0,size-1,target,count);
	if(status==0)
		cout<<"\nElement does not exist\n";
	else
	cout<<"\n\n\nNo.of instances ="<<status<<endl;
	return 0;
}
