#pragma once
#include <iostream>
#include <sstream>

template <typename T>
class LinkedList
{
private:
	struct Node
	{
		T data;
		Node *next;
	};
	Node *head;
	Node *tail;
public:
	LinkedList()
	{
		this->head = nullptr;
		this->tail = nullptr;
	}
	void AddNodeAtBeginning(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = head;
		head = temp;
		//tail = head->next;
	}
	void AddNodeToEnd(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			return;
		}
		Node *temp2 = new Node;
		temp2 = head;
		while (temp2->next != nullptr) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	void AddNodeToGivenPostition(T data, int n)
	{
		Node *temp1 = new Node;
		temp1->data = data;
		temp1->next = nullptr;
		if (n == 1) {
			temp1->next = head;
			head = temp1;
			return;
		}
		Node *temp2 = head;
		for (int i = 0; i < n - 2; i++) {
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
	void DeleteNodeAtGivenPosition(int n)
	{
		Node *temp1 = head;
		if (n == 1) {
			head = temp1->next;
			delete temp1;
			return;
		}
		int i;
		for (int i = 0; i < n - 2; i++) {
			temp1 = temp1->next;
		}
		Node *temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
	}
	void Print()
	{
		Node *temp = head;
		while (temp != nullptr) {
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
		std::cout << std::endl;
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

