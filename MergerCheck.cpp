/* Given two linked lists, check if they merge at some point and become one.
 * @Author - Harshit Srivastava
 */

#include"LinkedList.cpp"

void MergeCheck(Node *temp1, Node* temp2){
	Node* nextnode;
	while(temp1->hasNext()){
		cout<<temp1->getNext()<<endl;
		nextnode=temp1->getNext();
		temp1->setNext(0);
		temp1=nextnode;
	}
	while(temp2->hasNext()){
		cout<<temp2->getNext()<<endl;
		temp2=temp2->getNext();
	}
	cout<<"Both Linkelist are merged at node having data "<<temp2->getData()<<endl;

};

int main(){
	LinkedList A;
	A.insert("1");
	A.insert("2");
	A.insert("3");
	A.insert("4");
	LinkedList B;
	B.insert("6");
	B.insert("3");
	B.insert("4");
	A.reverse();
	B.reverse();
	MergeCheck(A.begin(),B.begin());
}
