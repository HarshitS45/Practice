/*
 * @Author - Harshit Srivastava
 * Data structure - Linkedlist implementations 
 * Available operations - 
 * insert(nth position) - Add an element at the nth position
 * remove() - Remove an  element from the Linkedlists
 * reverse() - Reverse the Linkedlist
 * print() - Prints the Linkedlist
 */


#include<iostream>

struct Node {
	private:
		std::string data;
		Node* next;
	public:
		Node() {
			this->next = 0;
		}

		Node(std::string data) {
			this->data = data;
			this->next = 0;
		}

		bool hasNext() {
			return this->next != 0;
		}

		std::string getData() {
			return this->data;
		}

		Node* getNext() {
			return this->next;
		}

		void setNext(Node* next) {
			this->next = next;
		}
};

class LinkedList {
	private:
		Node *head;
	
	public:
		LinkedList() {
		}

		void insert(std::string data) {
			Node *node = new Node(data);
			if(head == 0) {
				head = node;
				return;
			}
			Node *temp = head;
			while(temp->hasNext()) {
				temp = temp->getNext();
			}
			temp->setNext(node);
		}

		Node *remove(std::string data) {
			if(head == 0) {
				std::cout<<"Linked list does not have value="<<data<<std::endl;
				return 0;
			}
			if(head->getData() == data) {
				Node *temp = head;
				head = temp->getNext();
				temp->setNext(0);
				std::cout<<"Removed "<<data<<" from the linked list. Head modified"<<std::endl;
				return temp;
			}
			
			Node *temp = head, *previousNode;
			while(temp->getData() != data && temp->hasNext()) {
				previousNode = temp;
				temp = temp->getNext();
			}
			if(temp->getData() == data) {
				previousNode->setNext(temp->getNext());
				temp->setNext(0);
				std::cout<<"Removed "<<data<<" from the linked list."<<std::endl;
				return temp;
			}
			std::cout<<"Linked list does not have value="<<data<<std::endl;
			return 0;
		}

		void print() {
			if(head == 0) {
				std::cout<<"No items in the list\n";
				return;
			}

		      /*std::cout<<"For loop - "<<std::endl;
			for(Node *temp = head;temp != 0; temp = temp->getNext()) {
				std::cout<<temp->getData()<<"\t";
			}
			std::cout<<std::endl;
			*/

			std::cout<<"While loop - "<<std::endl;
			Node *temp = head;
			while(temp != 0) {
				std::cout<<temp->getData()<<"\t";
				temp = temp->getNext();
			}
			std::cout<<std::endl;
		}

		Node begin() {
			return *head;
		}

		int reverse(); 
};

//int main() {
//	LinkedList *ll = new LinkedList();
//	ll->insert("first");
//	ll->insert("second");
//	ll->insert("third");
//	ll->print();
//
//	std::cout<<"Iterating over data - "<<std::endl;
//	Node head = ll->begin();
//	while(head.hasNext()) {
//		std::cout<<"Fount data = "<<head.getData()<<std::endl;
//		head = *head.getNext();
//	}
//	std::cout<<"Fount data = "<<head.getData()<<std::endl;
//
//
//	ll->remove("third");
//	ll->print();
//
//	ll->remove("first");
//	ll->print();
//	
//	ll->remove("second");
//	ll->print();
//	return 0;
//}
