#pragma once
#include <exception>
#include "linkedList.h"
#include "../Stack Tester/pch.h"




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
	if (this->stackList.GetSize() == 0)
		throw std::length_error("Stack is empty!");
	this->stackList.DeletePosition(0);

}


template <class datatype>
void QueueMedLinkedList<datatype>::Push(datatype element) {
	this->stackList.InsertEnd(element);
}

template <class datatype>
datatype QueueMedLinkedList<datatype>::getElement() {
	if (this->stackList->GetSize() == 0)
		throw std::length_error("Stack is empty!");
	return this->stackList->GetNode(0);
}
template <class datatype>
int QueueMedLinkedList<datatype>::getSize() {
	return this->QueueList->GetSize;
}
