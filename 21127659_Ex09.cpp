#include "MergeList.h"

int main() {
	Node* node1 = NULL;
	Node* node2 = NULL;

	InputList(node1);
	InputList(node2);

	MergeList(node1, &node2);
	PrintList(node1);

	return 0;
}