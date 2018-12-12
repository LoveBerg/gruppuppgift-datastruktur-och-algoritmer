#pragma once
//#include <vector>
#include<exception>
#include "linkedList.h"





template <class datatype>
class Stack
{
public:
	void Pop();
	void Push(datatype element);
	datatype getElement();
	int getSize();

private:
	LinkedList<datatype> stackList;
	//std::vector<datatype> stackVector;

};

template <class datatype>
void Stack<datatype>::Pop() {
	if (this->stackList.GetSize() == 0)
		throw std::length_error("Stack is empty!");
	this->stackList.DeletePosition(this->stackList.GetSize()-1);
	//if (this->stackVector.size() == 0)
	//	throw std::length_error("Stack is empty!");
	//this->stackVector.pop_back();
	
}


template <class datatype>
void Stack<datatype>::Push(datatype element) {
	this->stackList.InsertEnd(element);
	//this->stackVector.push_back(element);
}

template <class datatype>
datatype Stack<datatype>::getElement() {
	if (this->stackList.GetSize() == 0)
		throw std::length_error("Stack is empty!");
	return this->stackList.GetNode(this->stackList.GetSize()-1);
	//if (this->stackVector.size() == 0)
	//	throw std::length_error("Stack is empty!");
	//return this->stackVector.back();
}
//
template <class datatype>
int Stack<datatype>::getSize() {

	return this->stackList.GetSize();
}