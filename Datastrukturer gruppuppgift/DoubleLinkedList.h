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
	void InsertEnd(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			head->prev = nullptr;
			return;
		}
		Node *temp2 = new Node;
		temp2 = head;
		while (temp2->next != nullptr) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
		temp->prev = temp2;
	}
	void InsertPosition(T data, int index)
	{
		if (index > GetSize() - 1) throw std::out_of_range("Out of range");
		Node *temp = new Node;
		Node *temp2 = new Node;
		temp2 = head;
		for (int i = 0; i < index - 1; i++)
		{
			temp2 = temp2->next;
		}
		temp->data = data;
		if (temp2->next == nullptr)
		{
			temp2->next = temp;
			temp->next = nullptr;
			temp->prev = temp2;
		}
		else
		{
			temp->next = temp2->next;
			temp->next->prev = temp;
			temp2->next = temp;
			temp->prev = temp2;
		}
	}
	void DeletePosition(int index) // ej klar kopierad från singel
	{
		if (head == nullptr) throw std::length_error("List is empty");
		Node *temp1 = head;
		if (index == 0) {
			head = temp1->next;
			delete temp1;
			return;
		}
		int i;
		for (int i = 0; i < index - 2; i++) {
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
	T GetNode(int index)
	{
		if (head == nullptr) throw std::length_error("List is empty");
		Node *current = head;
		int count{};
		while (current != nullptr)
		{
			if (count == index)
				return(current->data);
			count++;
			current = current->next;
		}
		assert(0);
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