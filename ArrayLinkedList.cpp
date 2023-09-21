//Create a list with position access. Think it in terms that it has benefits from both world - linked list and array
//i.e. it has low access time but still able to break the array into smaller parts
//


#include<iostream>
using namespace std;

struct Node{
	//private:
	//	int data[5];
	//	Node* next;
	public:

		int data[5];
		Node* next;
		Node(int data[5],int size){
			for(int i=0;i<size;i++)
			{
				this->data[i]=data[i];
			}
			this->next=0;
		}
};
class ArrayLL{
	private:
		Node *head=0;
	public:
		void insert(int *data,int size){
			Node *newnode=new Node(data,size);
			Node *temp=head;
			if(head==0){
				head=newnode;
				return;
			}
			while(temp->next!=0){
				temp=temp->next;
			}
                        temp->next=newnode;
                }	
		void print() {
                        if(head == 0) {
                                cout<<"No items in the list\n";
                                return;
                        }
                        for(Node *temp = head;temp != 0; temp = temp->next) {
				for(int i=0;i<5;i++){
                               		cout<<temp->data[i]<<"\t";
				}
                        }
                        cout<<endl;
                       	}
};

int main(){
	ArrayLL A;
	int a[]={1,2,3,4,5};
	A.insert(a,5);
	int b[]={6,7,8,9};
	A.insert(b,4);
	int c[]={1,2,3};
	A.insert(c,3);
	A.print();
}

