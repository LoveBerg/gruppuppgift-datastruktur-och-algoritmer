#pragma once
#include <iostream>

template <typename T>
struct node
{
	T data;
	node *next;
};

template <typename T>
class LinkedList
{
private:
	struct node *head, *tail;

public:

	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void AddNode(T n)
	{
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;

		if (head == NULL)
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
};

int main()
{
	LinkedList<int> a;
	a.AddNode(1);
	a.AddNode(2);
	return 0;

}