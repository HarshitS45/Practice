// Add both these linked list to provide single linked list with elementCount = max(elementCount of first, elementCount of second)

#include"LinkedList.cpp"

/*void addTwoLinkedLists(Node* first,Node* second) {
	Node *temp1=first,*temp2=second;
	LinkedList C;
	while(temp1!=0 && temp2!=0){
		string sum=temp1->getData()+temp2->getData();
		C.insert(sum);
		temp1=temp1->getNext();
		temp2=temp2->getNext();
	}
}
*/
int main(){
         LinkedList *A = new LinkedList();
         A->insert("first");
         A->insert("second");
         A->insert("third");
         A->print();
	 LinkedList B;
	 B.insert("-1");
	 B.insert("-2");
	 B.insert("-3");
	 B.print();
 
         /*std::cout<<"Iterating over data - "<<std::endl;
         Node head = A->begin();
         while(head.hasNext()) {
                 std::cout<<"Found data = "<<head.getData()<<std::endl;
                 head = *head.getNext();
         }
         std::cout<<"Found data = "<<head.getData()<<std::endl;
 	 */
 
         A->remove("third");
         A->print();
	 A->remove("first");
         A->print();
         A->remove("second");
         A->print();
	 
         return 0;
}
