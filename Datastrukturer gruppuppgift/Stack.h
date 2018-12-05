#pragma once
#include <stdbool.h>
#include <vector>




template <class datatype>
class Stack
{
public:
	void Pop();
	void Push(datatype element);
	datatype* getElement();

private:
	std::vector<datatype> stackVector;

};

