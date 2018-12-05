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
	struct Node *head, *tail;
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	void AddNodeToFirst(T data)
	{
		Node *temp = new Node;
		temp->data = data;
		temp->next = head;
		head = temp;
	}
	void AddNodeToEnd(T data)
	{
		Node* temp = new Node;
		temp->data = data;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}
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
		Node* temp2 = head;
		for (int i = 0; i < n - 2; i++) {
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
	void DeleteNodeOnGivenPosition(int n)
	{
		Node* temp1 = head;
		if (n == 1) {
			head = temp1->next;
			free(temp1);
			return;
		}
		int i;
		for (int i = 0; i < n - 2; i++) {
			temp1 = temp1->next;
		}
		Node* temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}
	void Print()
	{
		Node* temp = head;
		while (temp != nullptr) {
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
	int GetSize()
	{
		int count{};
		Node* temp = head;
		while (temp != nullptr)
		{
			++count;
			temp = temp->next;
		}
		return count;
	}
};

