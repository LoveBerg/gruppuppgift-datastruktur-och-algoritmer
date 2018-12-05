#include "Queue.h"
#include <iostream>
#include <string>

template <class datatype>
Queue<datatype>::Queue() // constructor
{
	front = NULL;
	back = NULL;
	queueNum = 0;
}

template <class datatype>
Queue<datatype>::~Queue() // destructor
{
	destroyQueue();
}

template <class datatype>
void Queue<datatype>::enqueue(datatype val)
{
	qNode *newNode;
	// Skapar ny nod och låter den hålla val
	newNode = new qNode;
	newNode->data = val;
	newNode->next = NULL;

	// change front and back pointers, depending if queue is empty or contains data
	if (isEmpty())
	{
		front = newNode;
		back = newNode;
	}

	else
	{
		back->next = newNode;
		back = newNode;
	}

	queueNum++;
}

template <class datatype>
void Queue<datatype>::dequeue(datatype &val)
{
	qNode *temp;

	if (isEmpty())
	{
		cout << "No data currently in queue" << endl;
	}
	else
	{
		// store data from front node in val
		val = front->data;
		// remove front node, delete
		temp = front;
		front = front->next;
		delete temp;

		//update queueNum
		queueNum--;
	}
}

template <class datatype>
bool Queue<datatype>::isEmpty() const
{
	bool empty;

	if (queueNum > 0)
		empty = false;
	else
		empty = true;

	return empty;
}

template <class datatype>
void Queue<datatype>::destroyQueue()
{
	datatype temp;

	while (!isEmpty())
	{
		dequeue(temp);
	}
}

int main()
{

	string word;
	int number;

	Queue<string> stringQueue;
	stringQueue.isEmptyenqueue("Hej");
	stringQueue.enqueue("Hejdå");
	stringQueue.destroyQueue();

	Queue<int> intQueue;

}