#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of string ";
	cin>>n;
	char s[n];
	int count=0;
	cout<<"Enter the string ";
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=',' && s[i]!='.')
		{
			cout<<s[i]<<"\n";
		}
		else if(s[i]!=' ')
		{
			
			cout<<s[i]<<"\n";
		}
		else
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}

