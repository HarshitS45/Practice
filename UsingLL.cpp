#include"LinkedList.cpp"

LinkedList* addTwoLinkedLists(LinkedList* first, LinkedList second) {
	// Add both these linked list to provide single linked list with elementCount = max(elementCount of first, elementCount of second)
}

int main() {
         LinkedList *ll = new LinkedList();
         ll->insert("first");
         ll->insert("second");
         ll->insert("third");
         ll->print();
 
         std::cout<<"Iterating over data - "<<std::endl;
         Node head = ll->begin();
         while(head.hasNext()) {
                 std::cout<<"Fount data = "<<head.getData()<<std::endl;
                 head = *head.getNext();
         }
         std::cout<<"Fount data = "<<head.getData()<<std::endl;
 
 
         ll->remove("third");
         ll->print();
 
         ll->remove("first");
         ll->print();
         
         ll->remove("second");
         ll->print();
         return 0;
}
