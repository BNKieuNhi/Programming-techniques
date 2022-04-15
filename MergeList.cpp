#include "MergeList.h"

Node* MakeNode(int data) {
	Node* newNode = new Node;

	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

void MergeList(Node* head1, Node** head2) {
	Node* node1 = head1;

	while (node1->next != NULL) {
		node1 = node1->next;
	}
	node1->next = *head2;
}

void AddHead(Node*& head, int data)
{
	Node* p = MakeNode(data);
	if (!head)
		head = p;
	else {
		p->next = head;
		head = p;
	}
}

void AddTail(Node*& head, int data)
{
	Node* p = head;
	Node* temp = MakeNode(data);

	if (!head)
		head = temp;
	else {
		while (p->next) {
			p = p->next;
		}
		p->next = temp;
	}
}

void InputList(Node*& node) {
	int n;
	do {
		cin >> n;
		if (n != 0)
			AddTail(node, n);
	} while (n != 0);
}

void PrintList(Node* node) {
	while (node) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << "0";
}