#pragma once
#include <iostream>
using namespace std;

template <class DataType>
class Queue
{
public:
	Queue(); // constructor

	~Queue(); // destructor

private:

	struct Cell
	{
		DataType data;
		Cell *next
	};


};