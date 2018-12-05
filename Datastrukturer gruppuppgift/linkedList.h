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
	void AddNodeFirst(T n)
	{
		Node *temp = new Node;
		temp->data = n;
		temp->next = head;
		head = temp;
	}
	void AddNodeEnd(T n)
	{
		Node *temp = new Node;
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
	void DeleteNodeAtGivenPosition(T n)
	{
		Node *temp1 = head;
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
		while (temp != NULL) {
			;
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
};

int main()
{
	LinkedList<std::string> a;
	a.AddNodeFirst("hej");
	a.AddNodeFirst("hej");
	LinkedList<int> b;
	b.AddNodeFirst(1);
	b.AddNodeFirst(2);
	b.Print();
	return 0;

}