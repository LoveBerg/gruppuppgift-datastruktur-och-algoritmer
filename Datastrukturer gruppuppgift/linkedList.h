#pragma once
#include <iostream>
#include <sstream>
#include <assert.h>
#include <exception>


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
	void InsertPosition(T data, int index)
	{
		if (index > GetSize() - 1) throw std::out_of_range("Out of range");
		Node *temp1 = new Node;
		temp1->data = data;
		temp1->next = nullptr;
		if (index == 0) {
			temp1->next = head;
			head = temp1;
			return;
		}
		Node *temp2 = head;
		for (int i = 0; i < index - 1; i++) {
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
	void DeletePosition(int index)
	{
		if (head == nullptr && index != 0) throw std::length_error("List is empty");
		Node *temp1 = head;
		if (index == 0) {
			head = temp1->next;
			delete temp1;
			return;
		}
		for (int i = 0; i < index - 1; i++) {
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
			std::cout << temp->data << std::endl;
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
		//assert(0);
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

