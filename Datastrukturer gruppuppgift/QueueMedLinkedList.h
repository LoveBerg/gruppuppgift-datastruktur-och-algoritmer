#pragma once
#include <exception>
#include "linkedList.h"

template <class datatype>
class QueueMedLinkedList
{
public:
	void Pop();
	void Push(datatype element);
	datatype getElement();
	int getSize();
private:
	LinkedList<datatype> QueueList;
};

template <class datatype>
void QueueMedLinkedList<datatype>::Pop() {
	if (this->QueueList.GetSize() == 0)
		throw std::length_error("Stack is empty!");
	this->QueueList.DeletePosition(0);
}


template <class datatype>
void QueueMedLinkedList<datatype>::Push(datatype element) {
	this->QueueList.InsertEnd(element);
}

template <class datatype>
datatype QueueMedLinkedList<datatype>::getElement() {
	if (this->QueueList.GetSize() == 0)
		throw std::length_error("Stack is empty!");
	return this->QueueList.GetNode(0);
}
template <class datatype>
int QueueMedLinkedList<datatype>::getSize() {
	return this->QueueList.GetSize();
}
