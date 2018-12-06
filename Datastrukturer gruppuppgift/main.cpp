#include <iostream>
#include "linkedList.h"
#include "DoubleLinkedList.h"

int main()
{
	LinkedList<int> aa;

	aa.AddNodeToEnd(1);
	aa.AddNodeToEnd(2);
	aa.AddNodeToEnd(3);
	aa.AddNodeToEnd(4);
	aa.AddNodeToEnd(5);
	aa.AddNodeToEnd(6);
	aa.Print();

	std::cout << "";

	return 0;
}