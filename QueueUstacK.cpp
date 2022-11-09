/* 
 * Problem : Implementation of queue using stack
 * @author - Harshit Srivastava
 *
 */

#include"Stack.cpp"

class Queue{
     public:
	stack B;
	stack C;
	void push(int element){
		B.push(element);
		cout<<element<<" Pushed\n";
	}
	void pop(){
		Node* temp=B.begin();
		while(temp!=0){
			Node *nextnode=temp->getNext();
			B.pop();
			C.push(temp->getData());
			temp=nextnode;
		}
		cout<<C.begin()->getData()<<" Popped\n";
		C.pop();
		temp=C.begin();
		while(temp!=0){
			Node *nextnode=temp->getNext();
			C.pop();
			B.push(temp->getData());
			temp=nextnode;
		}
	}
	void print(){
		Node* temp=B.begin();
                while(temp!=0){
                        Node *nextnode=temp->getNext();
                        B.pop();
                        C.push(temp->getData());
                        temp=nextnode;
                }
		cout<<"Elements of the queue are:\n";
		for(temp=C.begin();temp!=0;temp=temp->getNext()){
			cout<<temp->getData();
			cout<<endl;
		}
		temp=C.begin();
                while(temp!=0){
                        Node *nextnode=temp->getNext();
                        C.pop();
                        B.push(temp->getData());
                        temp=nextnode;
                }
	}
};

		 
int main(){
	Queue A;
	A.push(1);
	A.push(2);
	A.push(3);
	A.print();
	A.pop();
	A.print();
	A.push(4);
	A.push(5);
	A.pop();
	A.print();
}



