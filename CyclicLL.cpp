// Find if the given linked list forms a cycle of nodes
/*
 * @Author - Harshit Srivatava
 * Data structure - Circular Linked list implementations
 * Available Operations:
 * void insert(int element)-Insert the element in circular LL
 * void remove(int element)-Remove element from circular LL
 * void print()- Prints the elements
 * void checkCircularLL()-check whether LL is circular or not
 */

#include<iostream>
using namespace std;

struct Node{
	private:
		int data;
		Node *next;
	public:
		Node(int data){
			this->data=data;
			this->next=0;
		}

		int getData(){
			return this->data;
		}

		Node* getNext(){
			return this->next;
		}

		void setNext(Node* next){
			this->next=next;
		}

		bool hasNext(){
			return this->next!=0;
		}

};

class CircularLL{
	private:
		Node* head=0;
	public:
		void insert(int element){
			Node* newnode= new Node(element);
			if(head==0){
				head=newnode;
				newnode->setNext(head);
				return;
			}
			Node* temp=head;
			while(temp->getNext()!=head){
				temp=temp->getNext();
			}
			temp->setNext(newnode);
			newnode->setNext(head);
		}

		void remove(int element){
			Node *temp=head,*previous=0;
			if(head==0){
				cout<<"List is empty\n";
			}
			if(head->getData()==element){			//remove head
				while(temp->getNext()!=head){
					temp=temp->getNext();
				}
				Node* tail=temp;
				tail->setNext(head->getNext());
				head=head->getNext();
			}
			else{
				while(temp->getData()!=element && temp->getNext()!=head){
                                	previous=temp;
                                	temp=temp->getNext();
                        	}
                       		previous->setNext(temp->getNext());
			}
		}

		void print(){
			if(head == 0) {
                                cout<<"No items in the list\n";
                                return;
                        }
                        Node* temp=head;
                        while(temp->getNext()!=head) {
                                cout<<temp->getData()<<"\t";
                                //cout<<temp->getNext()<<"\t";
                                //cout<<temp<<"\t";
                                cout<<endl;
                                temp = temp->getNext();
                        }
                        cout<<temp->getData()<<"\t";
                        //cout<<temp->getNext()<<"\t";
                        //cout<<temp<<"\t";
                        cout<<endl;
                        return;

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
};

int main(){
	CircularLL A;
	A.insert(10);
	A.insert(20);
	A.insert(30);
	A.insert(40);
	A.print();
	A.remove(10);
	A.remove(40);
	A.remove(30);
	A.print();
	cout<<A.checkCircularLL();
}







