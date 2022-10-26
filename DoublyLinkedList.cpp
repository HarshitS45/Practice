/*
 * @Author - Harshit Srivastava 
 * Create a library class of doubly linked list which can be used a data structure in another program. 
 */
 
#include<iostream>

using namespace std;
 
struct Node{
	private:
		int data;
		Node* next;
		Node* previous;
	public:
		Node(int data){
			this->data=data;
			this->next=0;
			this->previous=0;
		}

		bool hasNext(){
			return this->next!=0;
		}

		Node* getNext(){
			return this->next;
		}

		int getData(){
			return this->data;
		}

		Node* getPrevious(){
			return this->previous;
		}

		void setNext(Node* next){
			this->next=next;
		}

		void setPrevious(Node* previous){
			this->previous=previous;
		}
};

class DoublyLinkedlist{
	private:
		Node* head=0;
	public:
		void insert(int element){
			Node* newnode=new Node(element);
			Node* temp;
			if(head==0){
				head=temp=newnode;
			}
			else{
				temp->setNext(newnode);
				newnode->setPrevious(temp);
				temp=newnode;
			}
			return;
		}
		void print(){
			if(head==0){
				cout<<"No elements in Doubly Linkedlist";
				return;
			}
			Node* temp=head;
			while(temp->hasNext()){
				cout<<temp->getData()<<endl;
				temp=temp->getNext();
			}
			cout<<temp->getData()<<endl;
			return;
		}
};

int  main(){
	DoublyLinkedlist A;
	A.insert(10);
	A.insert(20);
	A.print();
	return 0;
}

