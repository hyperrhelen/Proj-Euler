#include <iostream>

using namespace std;

struct Node {
	Node* next;
	int value;
};

Node* insert(Node* head, int value) {
	Node* temp =head;

	Node* new_ptr = new Node();
	new_ptr->value = value;
	new_ptr->next = NULL;

	if (head == NULL) {
		return new_ptr;
	}
	while(head->next != NULL) {
		head = head->next;
	}
	head->next = new_ptr;

	return temp;
}

int main() {

	Node* head = insert(NULL, 1);
	delete_node(head, 1);
	if(head == NULL) {
		cout << "Nothing" << endl;
	} else {

		while(head != NULL) {
			cout << head->value << endl;
			head = head->next;
		}	
	}

	return 0;
}