/*
 * @Author - Harshit Srivastava
 * Data structure - Queue with FIFO implementations 
 * Available operations - 
 * push(T element) - Add an element at the end of the queue
 * T pop() - Pop an element from the front of the queue. Throws exception when no element in the queue
 * T check() - Returns element at the front of the queue ithout popping it out of the queue. Returns 0 if not available
 * int size() - Returns the size of the queue
 * void print() - Print the elements present in the queue.
 */

#include<iostream>

using namespace std;

template <typename T> struct Node {
        private:
                T data;
                Node* next;

	public:
                Node() {
                        this->next = 0;
                }

                Node(T  data) {
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

template <typename T> class Queue{
	private:
		Node<T> *head=0;
	public:
		void push(T element){
			 Node<T> *node = new Node(element);
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

		void pop(){
			if(head==0){
				cout<<"No items in Queue\n";
				return;
			}
		        Node<T> *temp=head;
 		        head=temp->getNext();
        		temp->setNext(0);
		}

		T check(){
			return head->getData();
		}

		int size(){
		        Node<T> *temp=head;
       		        int count=0;
        		while(temp->hasNext()){
                		temp=temp->getNext();
                		count++;
        		}
        		count++;
        		return count;
		}

		void print(){
		        if(head == 0) {
                		cout<<"No items in the list\n";
                		return;
        		}
        		Node<T> *temp = head;
        		while(temp->hasNext()) {
                		cout<<temp->getData()<<"\t";
                		temp = temp->getNext();
        		}
        		cout<<temp->getData()<<"\t";
        		cout<<endl;
		}
};

int main(){
	Queue<int> A;
	A.push(1);
	A.push(2);
	A.print();
	A.push(3);
	A.pop();
	A.push(4);
	A.print();
	int x=A.size();
	cout<<"Size of the Queue is = "<<x<<endl;
	int y=A.check();
	cout<<"Top element is = "<<y<<endl;
	Queue<string> B;
	B.push("A");
	B.push("B");
	B.pop();
	B.pop();
	B.pop();
	B.print();
}



