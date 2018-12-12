#include <iostream>
#include <sstream>
#include "linkedList.h"
#include "DoubleLinkedList.h"
#include <iterator>
#include <vector>
class Person
{
public:
	int age;
	std::string name;
	std::string GetName() { return this->name; }
	int GetAge() { return this->age; }
};

int main()
{
		class Person
	{
	public:
		int age;
		std::string name;
	};
	LinkedList<Person> person;
	Person *p = new Person();
	p->age = 32;
	p->name = "Robert";
	person.InsertFirst(*p);
	auto aage = person.GetNode(0);
	std::cout << aage.age << std::endl;

}