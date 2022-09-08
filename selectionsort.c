#include<iostream>
using namespace std;

int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return 0;
}

int selectionsort(int array[],int size)
{
	for(int index1=0;index1<size;index1++)
	{
		int min=index1;
		for(int index2=index1+1;index2<size;index2++)
		{
			if(array[min]>array[index2])
			{
				min=index2;
			}
		}
		if(min!=index1)
		{
			swap(array[min],array[index1]);
		}
	}
	return 0;
}

int printarray(int array[],int size)
{
	int index;
	cout<<"Sorted array = {";
	for(index=0;index<size;index++)
	{
		cout<<array[index];
		if(index<size-1)
		{
			cout<<",";
		}
	}
	cout<<"}";
	return 0;	
}

int main()
{
	int size;
	cout<<"Enter size of the array = ";
	cin>>size;
	int array[size];
	cout<<"Enter "<<size<<" elements:\n";
	for(int index=0;index<size;index++)
	{
		cin>>array[index];
	}
	selectionsort(array,size);
	printarray(array,size);
	return 0;
}

