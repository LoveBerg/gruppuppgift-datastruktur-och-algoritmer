#pragma once
#include <iostream>

template<typename T>

class DoubleLinkedList
{
private:
	struct Node
	{
		T data;
		Node *next;
	};
	Node *head;
	Node *tail;
	Node *prev;
public:
	DoubleLinkedList()
	{
		this->head = nullptr;
		this->tail = nullptr;
		this->prev = nullptr;
	}
	void AddNodeAtBeginning(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = head;
		head = temp;
	}

};