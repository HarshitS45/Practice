/*
 * @Author - Harshit Srivastava
 * Problem: Add two linked list to provide single linked list with elementCount = max(elementCount of first, elementCount of second)
 */

#include "LinkedList.cpp"

void addTwoLinkedLists(Node* first,Node* second) {
	Node *temp1=first,*temp2=second;
	LinkedList C;
	string sum;
	while(temp1!=0 && temp2!=0){
		sum=temp1->getData()+temp2->getData();
		C.insert(sum);
		temp1=temp1->getNext();
		temp2=temp2->getNext();
	}
	while(temp1==0 && temp2!=0){
                sum=temp2->getData();
                C.insert(sum);
                temp2=temp2->getNext();
        }
	while(temp1!=0 && temp2==0){
                sum=temp1->getData();
                C.insert(sum);
                temp1=temp1->getNext();
        }
	C.print();
}

int main(){
         LinkedList *A = new LinkedList();
         A->insert("first");
         A->insert("second");
         A->insert("third");
         A->insert("second");
 	 A->remove("third");
         A->insert("third");
         A->print();
	 LinkedList B;
	 B.insert("-1");
	 B.insert("-2");
	 B.insert("-3");
	 B.remove("-3");
	 B.print();
 	 addTwoLinkedLists(A->begin(),B.begin());
         return 0;
}
