#include "Stack.h"
#include <vector>


template <class datatype>
void Stack<datatype>::Pop() {
	if (this->stackVector.size() == 0)
		throw "Stack is empty!";
	this->stackVector.erase(this->stackVector.begin());
}


template <class datatype>
void Stack<datatype>::Push(datatype element) {
	if(this->isEmpty == true)
		this->isEmpty == false;
	this->stackVector.push_back(element);
}

template <class datatype>
datatype* Stack<datatype>::getElement() {
	if (this->stackVector.size() == 0)
		throw "Stack is empty!";
	return *this->stackVector.begin();
}

