/*
 * @Author - Harshit Srivastava
 * Data structure - Linkedlist implementations with template
 * Available operations - 
 * insert(T data) - Add an element to the Linkedlist
 * remove(T data) - Remove an  element from the Linkedlist
 * reverse() - Reverse the Linkedlist
 * print() - Prints the Linkedlist
 */


#include<iostream>
using namespace std;

template<typename T> struct Node {
	private:
		T data;
		Node* next;
	public:
		Node() {
			this->next = 0;
		}

		Node(T data) {
			this->data = data;
			this->next = 0;
		}

		bool hasNext() {
			return this->next != 0;
		}

		T getData() {
			return this->data;
		}

		Node* getNext() {
			return this->next;
		}

		void setNext(Node* next) {
			this->next = next;
		}
};

template<typename T> class LinkedList {
	private:
		Node<T> *head;
	
	public:
		LinkedList() {
		}

		void insert(T data) {
			Node<T> *node = new Node(data);
			if(head == 0) {
				head = node;
				return;
			}
			Node<T> *temp = head;
			while(temp->hasNext()) {
				temp = temp->getNext();
			}
			temp->setNext(node);
		}

		Node<T> *remove(T data) {
			if(head == 0) {
				cout<<"Linked list does not have value="<<data<<endl;
				return 0;
			}
			if(head->getData() == data) {
				Node<T> *temp = head;
				head = temp->getNext();
				temp->setNext(0);
				cout<<"Removed "<<data<<" from the linked list. Head modified"<<endl;
				return temp;
			}
			
			Node<T> *temp = head, *previousNode;
			while(temp->getData() != data && temp->hasNext()) {
				previousNode = temp;
				temp = temp->getNext();
			}
			if(temp->getData() == data) {
				previousNode->setNext(temp->getNext());
				temp->setNext(0);
				cout<<"Removed "<<data<<" from the linked list."<<endl;
				return temp;
			}
			cout<<"Linked list does not have value="<<data<<endl;
			return 0;
		}

		void print() {
			if(head == 0) {
				cout<<"No items in the list\n";
				return;
			}
			for(Node<T> *temp = head;temp != 0; temp = temp->getNext()) {
				cout<<temp->getData()<<"\t";
			}
			cout<<endl;
		}

		void reverse() {
		        Node<T> *nextnode, *temp=this->head, *previous=0;
        		if(temp==0)
                		return;
        		while(temp->hasNext()) {
                        	nextnode=temp->getNext();
                        	temp->setNext(previous);
                        	previous=temp;
                        	temp=nextnode;
        		}
        		temp->setNext(previous);
        		this->head=temp;
		}

		Node<T> begin() {
			return *head;
		}
};

int main() {
	LinkedList<string> *ll= new LinkedList<string>();
	ll->insert("first");
	ll->insert("second");
	ll->insert("third");
	ll->print();
	ll->remove("second");
	ll->reverse();
	ll->print();
	LinkedList<int> *llInt = new LinkedList<int>();
	llInt->insert(1);
	llInt->insert(2);
	llInt->insert(3);
	llInt->print();
	llInt->remove(1);
	llInt->reverse();
	llInt->print();
	return 0;
}
