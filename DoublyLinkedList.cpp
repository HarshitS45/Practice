/*
 * @Author - Harshit Srivastava 
 * Create a library class of doubly linked list which can be used a data structure in another program. 
 *
 * Data structure - Doubly Linkedlist implementations
 * Available operations -
 * void insert(int element) - Add an element
 * void remove(int element) - Remove element from the Doubly Linkedlists
 * void print() - Prints the Doubly Linkedlist

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
		void remove(int element){
			Node* temp=head,*leftnode=0;
			if(head==0){
				cout<<"No elements in linkedlist\n";
				return;
			}
			if(head->getData()==element){				//remove head node
				head=temp->getNext();
				temp->setNext(0);
				head->setPrevious(0);
				cout<<element<<" Removed    Head modified\n";
				return;
			}

			while(temp->hasNext()){
				leftnode=temp->getPrevious();
				if(temp->getData()==element){
					leftnode->setNext(temp->getNext());
					temp->getNext()->setPrevious(leftnode);
					temp->setPrevious(0);
					temp->setNext(0);
					cout<<element<<" Removed\n";
					return;
				}
				temp=temp->getNext();
			}
			if(temp->getData()==element){				//remove last node
				leftnode=temp->getPrevious();
				leftnode->setNext(0);
				temp->setPrevious(0);
				cout<<element<<" Removed\n";
				return;
			}
			else{
				cout<<element<<" not found in list\n";
			}
			return;
		}


		void print(){
			if(head==0){
				cout<<"No elements in Doubly Linkedlist\n";
				return;
			}
			Node* temp=head;
			cout<<"Doubly Linkedlist:\n";
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
	A.insert(20);
	A.insert(20);
	A.insert(30);
	A.insert(40);
	A.insert(40);
	A.print();
	A.remove(10);
	A.remove(30);
	A.remove(30);
	A.remove(40);
	A.remove(50);
	A.print();
	return 0;
}

