#pragma once
#include <iostream>

template<typename T>
class DoubleLinkedList
{
private:
	struct Node
	{
		T data;
		Node *prev;
		Node *next;
	};
	Node *head;
public:
	DoubleLinkedList()
	{
		this->head = nullptr;
	}
	void InsertFirst(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = head;
		temp->prev = nullptr;

		if (head != nullptr) 
			head->prev = temp;
		head = temp;
	}
	void InsertEnd()
	{

	}

















	int GetSize()
	{
		int count{};
		Node *temp = head;
		while (temp != nullptr)
		{
			++count;
			temp = temp->next;
		}
		return count;
	}
};