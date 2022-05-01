#include <iostream>

using namespace std;

class Node {
	
	public:
		int data;
		Node* next;
		
		Node(int value) {
			data = value;
			next = NULL;
		}
};

void insertAtEnd(Node* &head, int value) {
	Node* n = new Node(value);
	
	if(head == NULL) {
		head = n;
		return;
	}
	
	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
};

void insertAtStart(Node* &head, int value) {
	Node* n = new Node(value);
	n->next = head;
	n = head;
}

void display(Node* head) {
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "NULL " << endl;
}

// Extra Linked List functions
bool search(Node* head, int key) {
	Node* temp = head;
	while(temp != NULL) {
		if(temp->data == key) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int main() {
	
	Node* head = NULL;
	
	insertAtEnd(head, 10);
	insertAtEnd(head, 20);
	insertAtEnd(head, 30);
	
	display(head);
	
	return 0;
}
