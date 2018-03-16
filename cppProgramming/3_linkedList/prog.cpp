#include <iostream>

using namespace std;

struct node_t{
	unsigned v;
	struct node_t* next = NULL;
};

struct node_t* even_nodes(struct node_t** oldListHeadPointer){
	struct node_t *newListTail, *newListHead, *oldListTail, *runner;
	newListHead = NULL;
	oldListTail = NULL;
	newListTail = NULL;
	runner = *oldListHeadPointer;
	*oldListHeadPointer = NULL;
	while(runner != NULL){
		if (runner->v % 2 == 0){
			// Even number - add runner to new list
			if (newListHead == NULL){
				// First time adding to new list
				newListHead = runner;
				newListTail = runner;
			}
			else{
				// Even - add to newList
				newListTail->next = runner;
				newListTail = newListTail->next;

			}
		} 
		else{
			if (*oldListHeadPointer == NULL){
				// First time adding to oldList
				oldListTail = runner;
				*oldListHeadPointer = runner;
			}
			else{
				// Odd number - add runner to old list	
				oldListTail->next = runner;
				oldListTail = oldListTail->next;
			}
		}
		// Progress runner
		runner = runner->next;
	}
	// Check last elements
	if (oldListTail != NULL){
		if (oldListTail->next != NULL){
			oldListTail->next = NULL;
		}
	}
	if ( newListTail != NULL){
		if (newListTail->next != NULL){
			newListTail->next = NULL;
		}
	}

	return newListHead;
}


void printLinkedList(struct node_t* list){
	while (list != NULL){
		cout << list->v << endl;
		list = list->next;
	}
}

int main(){
	// Create the linked list
	struct node_t l1, l2, l3, l4, l5, l6;
	l1.next = &l2;
	l2.next = &l3;
	l3.next = &l4;
	l4.next = &l5;
	l5.next = &l6;
	l1.v = 1;
	l2.v = 1;
	l3.v = 2;
	l4.v = 8;
	l5.v = 4;
	l6.v = 1;

	struct node_t* hpointer = &l1;
	struct node_t** head = &hpointer;
	cout << endl << "original list:" << endl;
	printLinkedList(*head);
	struct node_t* toPrint = even_nodes(head);
	cout << endl << "new list:" << endl;
	printLinkedList(toPrint);
	cout << endl << "original list:" << endl;
	printLinkedList(*head);

}
