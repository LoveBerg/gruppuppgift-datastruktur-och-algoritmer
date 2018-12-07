#include "pch.h"
#include "../Datastrukturer gruppuppgift/linkedList.h"

TEST(LinkedList, GetSizeOfList) {
	LinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(LinkedList, InsertIntToListAndReturnValue) {
	LinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	EXPECT_EQ(1, test.GetNode(3));
}
TEST(LinkedList, InsertFloatToListAndReturnValue) {
	LinkedList<float> test;
	test.InsertEnd(1);
	test.InsertEnd(3);
	test.InsertEnd(4);
	test.InsertEnd(22);
	EXPECT_EQ(4, test.GetNode(2));
}
TEST(LinkedList, InsertStringToListAndReturnSize) {
	LinkedList<std::string> test;
	test.InsertFirst("Tjenare");
	test.InsertFirst("Mannen");
	test.InsertFirst("Läget");
	test.InsertFirst("Då?");
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(LinkedList, InsertStringToListAndReturnString) {
	LinkedList<std::string> test;
	test.InsertEnd("Tjenare");
	test.InsertEnd("Mannen");
	test.InsertEnd("Läget");
	test.InsertEnd("Då?");
	test.GetSize();
	EXPECT_EQ("Tjenare", test.GetNode(0));
}
TEST(LinkedList, InsertClassObjectToListAndReturnSize) {
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
	person.GetSize();
	EXPECT_EQ(1, person.GetSize());
}
TEST(LinkedList, InsertClassObjectToListAndReturnValue) {
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
	auto age = person.GetNode(0);

	EXPECT_EQ("Robert", person.GetNode(0));
}
