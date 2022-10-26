/*
 * @Author - Harshit Srivastava
 * Data structure - Queue with FIFO implementations 
 * Available operations - 
 * push(T element) - Add an element at the end of the queue
 * T pop() - Pop an element from the front of the queue. Throws exception when no element in the queue
 * T check() - Returns element at the front of the queue without popping it out of the queue. Returns 0 if not available
 * int size() - Returns the size of the queue
 */

#include<iostream>

using namespace std;

struct Node {
        private:
                int data;
                Node* next;

	public:
                Node() {
                        this->next = 0;
                }

                Node(int data) {
                        this->data = data;
                        this->next = 0;
                }

                bool hasNext() {
                        return this->next != 0;
                }

                int getData() {
                        return this->data;
                }

                Node* getNext() {
                        return this->next;
                }

                void setNext(Node* next) {
                        this->next = next;
                }
};

class Queue{
	private:
		Node *head=0;
	public:
		void push(int element);
		void pop();
		int check();
		int size();
		void print();
};

void Queue::push(int element){
	Node *node = new Node(element);
        if(head == 0) {
        	head = node;
               	return;
        }
        Node *temp = head;
        while(temp->hasNext()) {
       		temp = temp->getNext();
        }
        temp->setNext(node);
};

void Queue::pop(){
	Node* temp=head;
	head=temp->getNext();
	temp->setNext(0);
	return;
};

int Queue::size(){
	Node* temp=head;
	int count=0;
	while(temp->hasNext()){
		temp=temp->getNext();
		count++;
	}
	count++;
	return count;
};

int Queue::check(){
	return head->getData();
};

void Queue::print() {
        if(head == 0) {
        	cout<<"No items in the list\n";
     	   	return;
	}
	Node* temp = head;
        while(temp->hasNext()) {
        	cout<<temp->getData()<<"\t";
       		temp = temp->getNext();
        }
       	cout<<temp->getData()<<"\t";
	cout<<endl;
};


int main(){
	Queue A;
	A.push(1);
	A.push(2);
	A.print();
	A.push(3);
	A.pop();
	A.push(4);
	A.print();
	A.pop();
	A.push(5);
	A.print();
	int x=A.size();
	cout<<"Size of the Queue is = "<<x<<endl;
	int y=A.check();
	cout<<"Top element is = "<<y<<endl;
}



