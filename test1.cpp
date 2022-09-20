#include<iostream>
using namespace std;

int main()
{
	struct node
	{
		int data;
		node *next;
	};
	struct node *temp;
	cout<<"temp->data "<<temp->data<<endl;
	//cout<<temp.data<<endl;
	//cout<<temp.next<<endl;
	//cout<<*temp<<endl;
	cout<<"temp->next "<<temp->next<<endl;
	int value = 10;
	cout<<"value "<<value<<endl;
	cout<<"&value "<<&value<<endl;
	cout<<"*&value "<<*&value<<endl;
	int *value1 = &value;
	cout<<"value1 "<<*value1<<endl;
	cout<<"&value1 "<<&value1<<endl;
	cout<<"*&value1 "<<*&value1<<endl;
	cout<<"*value "<<*value1<<endl;
	value = 20;
	cout<<"*value1 "<<*value1<<endl;
	cout<<"value1 "<<value1<<endl;
	//int *value3=5;
	//cout<<value3;

}
