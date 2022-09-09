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
				//cout<<"Step1\n"<<found<<"\n";
				cout<<"Index position = "<<mid<<"\n";
				count = binarysearch(arr,lb,mid-1,target,count);		
				//cout<<"&&";			
				count = binarysearch(arr,mid+1,ub,target,count);
			
			}
			else if(target<arr[mid])
			{		
				//cout<<"Step2\n";
				count = binarysearch(arr,lb,mid-1,target,count);
			}
			else
               		{
				//cout<<"Step3\n";
	  			count = binarysearch(arr,mid+1,ub,target,count);
           		}

		}
		//cout<<"Step4\n"<<found<<"\n";	
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
		cout<<"\nElement does not exist";
	else
		cout<<"\n\n\nNo.of instances ="<<status;
	return 0;
}
