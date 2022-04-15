#ifndef _MERGELIST_H
#define _MERGELIST_H
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* MakeNode(int data);
void MergeList(Node* head1, Node** head2);

void AddHead(Node*& head, int data);
void AddTail(Node*& head, int data);

void InputList(Node*& node);
void PrintList(Node* node);

#endif
