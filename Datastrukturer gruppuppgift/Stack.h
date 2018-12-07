#pragma once
#include <vector>
#include<exception>
#include "../Stack Tester/pch.h"




template <class datatype>
class Stack
{
public:
	void Pop();
	void Push(datatype element);
	datatype getElement();
	int getSize();

private:
	std::vector<datatype> stackVector;

};

template <class datatype>
void Stack<datatype>::Pop() {
	if (this->stackVector.size() == 0)
		throw std::length_error("Stack is empty!");
	this->stackVector.pop_back();
}


template <class datatype>
void Stack<datatype>::Push(datatype element) {
	this->stackVector.push_back(element);
}

template <class datatype>
datatype Stack<datatype>::getElement() {
	if (this->stackVector.size() == 0)
		throw std::length_error("Stack is empty!");
	return this->stackVector.back();
}

template <class datatype>
int Stack<datatype>::getSize() {
	return this->stackVector.size();
}