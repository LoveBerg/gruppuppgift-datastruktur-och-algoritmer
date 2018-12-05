#pragma once
#include <iostream>

//template <typename T>

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
		head = NULL;
		tail = NULL;
	}
	void AddNode(T n)
	{
		Node* temp = new Node;
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
	void DeleteNode(T n)
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
};

int main()
{
	LinkedList<std::string> a;
	a.AddNode("hej");
	a.AddNode("hej");
	LinkedList<int> b;
	b.AddNode(1);
	b.AddNode(2);
	return 0;
}