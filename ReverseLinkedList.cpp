// Use LinkedList class to take an input from console. Reverse the list and print. Do it with and without recusrsion 


#include"LinkedList.cpp"


void reversal(LinkedList* reversed, Node current) {
       if(current.hasNext()) {
	       reversal(reversed, *current.getNext());
       }
       reversed->insert(current.getData());
}       

LinkedList *reverseList(LinkedList ll) {
	LinkedList *reversed = new LinkedList();
	reversal(reversed, ll.begin());
	return reversed;
}

int main(){
	 LinkedList *ll = new LinkedList();
         ll->insert("A");
         ll->insert("B");
         ll->insert("C");
         ll->insert("D");
         ll->insert("E");
         ll->print();
	 ll->reverse();
	 ll->print();
	 cout<<"Creting new reversed list to get original - "<<endl;
	 LinkedList *reversed = reverseList(*ll);
         reversed->print();
	 ll->print();
	 return 0;
}
