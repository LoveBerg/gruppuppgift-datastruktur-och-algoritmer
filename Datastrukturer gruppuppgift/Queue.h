//#pragma once
//#include <iostream>
//using namespace std;
//
//template <class DataType>
//class Queue
//{
//public:
//	Queue<DataType>::Queue()
//	{
//		head = tail = NULL;
//		count = 0;
//	}
//	Queue<DataType>::~Queue()
//	{
//		clear();
//	}
//	int size();
//	bool isEmpty();
//	void clear();
//	void enqueue(DataType value);
//	DataType dequeue();
//	DataType peek();
//private:
//
//	struct Cell
//	{
//		DataType data;
//		Cell *next
//	};
//
//Cell *head;
//Cell *tail;
//int count;
//
//};
//
//template <typename DataType>
//int Queue<DataType>::size() 
//{
//	return count;
//}
//
//template <typename DataType>
//bool Queue<DataType>::isEmpty() {
//	return count == 0;
//}
//
//template <typename DataType>
//void Queue<DataType>::clear() {
//	while (count > 0) {
//		dequeue();
//	}
//}
//
//template <typename DataType>
//void Queue<DataType>::enqueue(DataType value) {
//	Cell *cp = new Cell;
//	cp->data = value;
//	cp->next = NULL;
//	if (head == NULL) {
//		head = Cell;
//	}
//	else {
//		tail->next = Cell;
//	}
//	tail = Cell;
//	count++;
//}
//
//template <typename DataType>
//DataType Queue<DataType>::dequeue() {
//	if (isEmpty()) error("Dequeue: Attempting to dequeue an empty queue");
//	Cell *cp = head;
//	DataType result = cp->data;
//	head = cp->next;
//	if (head == NULL) tail = NULL;
//	count--;
//	delete Cell;
//	return result;
//}
//
//template <typename DataType>
//DataType Queue<DataType>::peek() {
//	if (isEmpty()) error("peek: Attempting to peek at an empty queue");
//	return head->data;
//}