#include <iostream>
#include <sstream>
#include "linkedList.h"
#include "DoubleLinkedList.h"

int main()
{
	DoubleLinkedList<int> bb;


	LinkedList<int> aa;
	aa.InsertEnd(15);
	aa.InsertEnd(25);
	aa.InsertEnd(35);
	aa.InsertEnd(45);
	aa.InsertEnd(55);
	aa.InsertEnd(69);
	aa.InsertPosition(9999, 0);
	aa.DeletePosition(0);
	aa.DeletePosition(0);

	aa.Print();
	std::cout << std::endl;
	std::cout << aa.GetSize() << std::endl;
	std::cout << aa.GetNode(4) << std::endl;

	bb.InsertFirst(1);
	bb.InsertFirst(2);
	bb.InsertFirst(3);
	std::cout << bb.GetSize() << std::endl;

	std::cout << "";

	return 0;
}