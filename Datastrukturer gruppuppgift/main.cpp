#include <iostream>
#include <sstream>
#include "linkedList.h"
#include "DoubleLinkedList.h"
#include <iterator>
#include <vector>


int main()
{
	DoubleLinkedList<int> a;
	a.InsertEnd(1);
	a.InsertEnd(2);
	a.InsertEnd(3);
	a.InsertEnd(4);
	a.DeletePosition(1);
	//a.Print();

}