#include "pch.h"
#include "../Datastrukturer gruppuppgift/DoubleLinkedList.h"

TEST(DoubleLinkedList, InsertIntToListAtPostitionAndReturnValue) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertPosition(44, 1);
	EXPECT_EQ(44, test.GetNode(1));
}
TEST(DoubleLinkedList, GetSizeOfList) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(DoubleLinkedList, InsertIntToListAndReturnValue) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	EXPECT_EQ(1, test.GetNode(3));
}
TEST(DoubleLinkedList, InsertFloatToListAndReturnValue) {
	DoubleLinkedList<float> test;
	test.InsertEnd(1);
	test.InsertEnd(3);
	test.InsertEnd(4);
	test.InsertEnd(22);
	EXPECT_EQ(4, test.GetNode(2));
}
TEST(DoubleLinkedList, InsertStringToListAndReturnSize) {
	DoubleLinkedList<std::string> test;
	test.InsertFirst("Tjenare");
	test.InsertFirst("Mannen");
	test.InsertFirst("L�get");
	test.InsertFirst("D�?");
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(DoubleLinkedList, InsertStringToListAndReturnString) {
	DoubleLinkedList<std::string> test;
	test.InsertEnd("Tjenare");
	test.InsertEnd("Mannen");
	test.InsertEnd("L�get");
	test.InsertEnd("D�?");
	test.GetSize();
	EXPECT_EQ("Tjenare", test.GetNode(0));
}
TEST(DoubleLinkedList, InsertClassObjectToListAndReturnSize) {
	class Person
	{
	public:
		int age;
		std::string name;
	};
	DoubleLinkedList<Person> person;
	Person *p = new Person();
	p->age = 32;
	p->name = "Robert";
	person.InsertFirst(*p);
	person.GetSize();
	EXPECT_EQ(1, person.GetSize());
}
TEST(DoubleLinkedList, InsertClassObjectToListAndReturnValue) {
	class Person
	{
	public:
		int age;
		std::string name;
	};
	DoubleLinkedList<Person> person;
	Person *p = new Person();
	p->age = 32;
	p->name = "Robert";
	person.InsertFirst(*p);
	auto age = person.GetNode(0);

	EXPECT_EQ("Robert", person.GetNode(0));
}