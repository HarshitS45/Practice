#include<iostream>

using namespace std;

int main()
{
	struct node
	{
		int data;
		struct node *next;
	};

	struct node n;
	int *head;
	head=&n.data;
	cin>>n.data;
	cout<<n.data;
	cout<<head;
}


