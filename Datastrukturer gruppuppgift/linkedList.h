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
public:
	LinkedList()
	{
		this->head = nullptr;
	}
	void InsertFirst(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = head;
		head = temp;
	}
	void InsertEnd(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			return;
		}
		Node *temp2 = new Node;
		temp2 = head;
		while (temp2->next != nullptr) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	void InsertPosition(T data, int n)
	{
		Node *temp1 = new Node;
		temp1->data = data;
		temp1->next = nullptr;
		if (n == 0) {
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
	void DeletePosition(int n)
	{
		Node *temp1 = head;
		if (n == 0) {
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
	int GetNode(int index)
	{
		Node *temp = head;
		int size = GetSize();
		for (int i = 0; i < size; i++) {
			if (i == index && head != nullptr) {
				return temp->data;
			}
			temp = temp->next;
		}
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

