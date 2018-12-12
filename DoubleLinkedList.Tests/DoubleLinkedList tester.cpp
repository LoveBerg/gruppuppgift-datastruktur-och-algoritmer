#include "../Datastrukturer gruppuppgift/DoubleLinkedList.h"
#include "gtest/gtest.h"

TEST(DoubleLinkedList, InsertIntToListAtPostitionAndReturnValue) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertPosition(44, 0);
	EXPECT_EQ(44, test.GetNode(0));
}
TEST(DoubleLinkedList, DeleteANodeAtPositionReturnValue) {
	DoubleLinkedList<int> test;
	test.InsertEnd(1);
	test.InsertEnd(2);
	test.InsertEnd(3);
	test.InsertEnd(4);
	test.DeletePosition(2);
	test.DeletePosition(1);
	EXPECT_EQ(4, test.GetNode(1));
}
TEST(DoubleLinkedList, DeleteFirstAndDeleteLastNodeAtPositionReturnSize) {
	DoubleLinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.DeletePosition(0);
	test.DeletePosition(2);
	EXPECT_EQ(2, test.GetSize());
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
	test.InsertFirst("Läget");
	test.InsertFirst("Då?");
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(DoubleLinkedList, InsertStringToListAndReturnString) {
	DoubleLinkedList<std::string> test;
	test.InsertEnd("Tjenare");
	test.InsertEnd("Mannen");
	test.InsertEnd("Läget");
	test.InsertEnd("Då?");
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
TEST(DoubleLinkedList, InsertClassObjectToListAndReturnInt) {
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
	auto personData = person.GetNode(0);
	EXPECT_EQ(personData.age, 32);
}
TEST(DoubleLinkedList, InsertClassObjectToListAndReturnString) {
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
	auto personData = person.GetNode(0);

	EXPECT_EQ(personData.name, "Robert");
}
TEST(DoubleLinkedList, GetSizeFromEmptyList) {
	DoubleLinkedList<int> test;

	EXPECT_EQ(0, test.GetSize());
}
TEST(DoubleLinkedList, GetNodeFromEmptyList) {
	DoubleLinkedList<int> test;

	EXPECT_THROW(test.GetNode(10), std::length_error);
}
TEST(DoubleLinkedList, DeleteNodeFromEmptyList) {
	DoubleLinkedList<int> test;
	EXPECT_THROW(test.DeletePosition(4), std::length_error);
}
TEST(DoubleLinkedList, InsertIntToListAtPostitionWhenListIsEmpty) {
	DoubleLinkedList<int> test;
	EXPECT_THROW(test.InsertPosition(44, 2), std::out_of_range);
}