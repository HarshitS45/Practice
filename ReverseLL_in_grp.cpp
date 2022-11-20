/*
 * @Author - Harshit Srivastava
 * Problem: Revrse linkedlist in k groups
 * Input - 1 2 3 4 5 , k=3
 * Output - 3 2 1 5 4 
 */

#include"LinkedList.cpp"

Node* Reverse(Node *head,int k){
	Node *temp=head,*temp2,*nextnode,*previousnode,*tail,*start,*clone=0;
	int i,limit=k,size=0;
	while(temp!=0){
		temp=temp->getNext();
		size++;
	}
	temp=head;
	while(temp!=0 && limit<=size){
		i=1;
		while(i<k){
			temp=temp->getNext();
			i++;
		}
		tail=temp->getNext();
		temp->setNext(0);
		temp=head;
		previousnode=0;
		while(temp!=0){
			nextnode=temp->getNext();
			temp->setNext(previousnode);
			previousnode=temp;
			temp=nextnode;
			
		}
		start=previousnode;
		if(clone==0){
			clone=head;
			temp2=previousnode;
		}
		else
			clone->setNext(start);
		clone=head;
		temp=tail;
		head=tail;
		limit=limit+k;
	}
	previousnode=0;
	while(temp!=0){
                 nextnode=temp->getNext();
                 temp->setNext(previousnode);
                 previousnode=temp;
                 temp=nextnode;
    	}
	start=previousnode;
	clone->setNext(start);

	return temp2;
}

int main(){
	LinkedList A;
	A.insert("1");
	A.insert("2");
	A.insert("3");
	A.insert("4");
	A.insert("5");
	A.insert("6");
	A.insert("7");
	A.insert("8");
	A.print(A.begin());
	Node *head=Reverse(A.begin(),3);
	A.print(head);
}

		


	

