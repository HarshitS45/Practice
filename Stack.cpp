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

struct Node{
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

class stack{
	private:
		Node* head=0;
	public:
		void push(int element){
			Node* node=new Node(element);
			Node* temp=head;
			head=node;
			node->setNext(temp);
			//cout<<node->getData()<<" Pushed\n";
			return;
		}

		void pop(){
			Node* temp=head;
			head=temp->getNext();
			temp->setNext(0);
			//cout<<temp->getData()<<" Popped\n";
			return;
		}
		
		Node *begin(){
			return this->head;
		}

		void print(){
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
			return;
		}
};
	
/*
int  main()
{
	stack A;
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
*/
