/*
 * @Author - Harshit Srivastava
 * Data structure - Stack with LIFO implementations 
 * Available operations - 
 * push(T element) - Add an element at the start of the stack
 * pop() - Pop an element from the front of the stack. Throws exception when no element in the stack
 * void print() - Print the elements present in the stack.
 */

#include<iostream>
using namespace std;

template<typename S> struct Node{
	private:
		S data;
		Node* next;
	public:
		Node() {
                        this->next = 0;
                }

                Node(S data) {
                        this->data = data;
                        this->next = 0;
                }

                bool hasNext() {
                        return this->next != 0;
                }

                S getData() {
                        return this->data;
                }

                Node* getNext() {
                        return this->next;
                }

                void setNext(Node* next) {
                        this->next = next;
                }


};

template<typename S> class stack{
	private:
		Node<S>* head=0;
	public:
		void push(S element){
			Node<S>* node=new Node(element);
			Node<S>* temp=head;
			head=node;
			node->setNext(temp);
			return;
		}

		void pop(){
			Node<S>* temp=head;
			head=temp->getNext();
			temp->setNext(0);
			return;
		}

		void print(){
			if(head == 0) {
                		cout<<"No items in the list\n";
                		return;
        		}
       			Node<S>* temp = head;
        		while(temp->hasNext()) {
                		cout<<temp->getData()<<"\t";
                		temp = temp->getNext();
        		}
        		cout<<temp->getData()<<"\t";
        		cout<<endl;
			return;
		}
};
	

int  main()
{
	stack<int> A;
	A.push(10);
	A.push(5);
	A.push(20);
	A.pop();
	A.push(12);
	A.pop();
	A.print();
	stack<string> B;
	B.push("Harshit");
	B.push("Sangam");
	B.pop();
	B.push("Yuvraj");
	B.push("Anmol");
	B.pop();
	B.print();
	return 0;
}

