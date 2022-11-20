#include<iostream>
#include<stdio.h>
int N=7;
int stack[7];
int top=-1;
void push()
{
	int a;
	printf("\nEnter data\n");
	scanf("%d",&a);
	if(top==N-1)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		top++;
		stack[top]=a;
	}
}
void pop()
{
	int b;
	if(top==-1)
	{
		printf("\nStack Underflow\n");	
	}	
	else
	{
		b=stack[top];
		top--;
		printf("\nPoped item is  %d\n",b);
			
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\nStack Underflow\n");	
	}
	else
	{
		printf("\nPeek value is  %d\n",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("\n%d\n",stack[i]);
	}	
}
int main()
{	

	push();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	pop();
	pop();
	pop();
	pop();
	peek();
	display();
}
