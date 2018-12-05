#pragma once
#include <iostream>
using namespace std;

template <class datatype>
class Queue
{
public:
	Queue(); // constructor
	~Queue(); // destructor
	void enqueue(datatype);
	void dequeue(datatype &);
	bool isEmpty() const;
	
	void destroyQueue();
private:
	struct qNode
	{
		datatype data;
		struct qNode *next;
	};
	
	qNode *front; // holds front of queue
	qNode *back; // holds back of queue

	int queueNum;

};