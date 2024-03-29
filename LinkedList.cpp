/*
 * @Author - Harshit Srivastava
 * Data structure - Linkedlist implementations 
 * Available operations - 
 * insert(nth position) - Add an element at the nth position
 * remove() - Remove an  element from the Linkedlists
 * reverse() - Reverse the Linkedlist
 * print() - Prints the Linkedlist
 * bool checkCircularLL() - checks linkedlist is circular or not
 * traverse() - Traverse the Linkedlist
 */


#include<iostream>
using namespace std;

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
		Node *head=0;
	
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

		Node *remove(string data) {
			if(head == 0) {
				cout<<"Linked list does not have value="<<data<<endl;
				return 0;
			}
			if(head->getData() == data) {
				Node *temp=head;
				head = temp->getNext();
				temp->setNext(0);
				cout<<"Removed "<<data<<" from the linked list. Head modified"<<endl;
				return temp;
			}
			Node *temp=head,*previousNode=0;
			while(temp->getData()!= data && temp->hasNext()) {
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

		void print(Node *head) {
			if(head == 0) {
				cout<<"No items in the list\n";
				return;
		}
			Node *temp = head;
			while(temp != 0) {
				cout<<temp->getData()<<"\t";
				temp = temp->getNext();
			}
			cout<<endl;
		}

		Node* begin() {
			return this->head;
		}

		void reverse(){
                        Node*nextnode, *temp=this->head, *previous=0;
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

		bool checkCircularLL(){
                        if(head==0 || head->getNext()==0){
                                return false;
                        }
                        Node* temp1=head,*temp2=head;
                        while(temp1!=0 && temp2!=0 && temp2->getNext()!=0){
                                temp1=temp1->getNext();
                                temp2=(temp2->getNext())->getNext();
                                if(temp1==temp2){
                                        return true;
                                }
                        }
                        return false;
                }


		/*void traverse(Node* head){	
        		 while(head->hasNext()) {
                 		cout<<"Found data = "<<head->getData()<<endl;
                 		head = *head.getNext();
       	 		 }   
         		 cout<<"Found data = "<<head.getData()<<endl;
	
		}*/

};
