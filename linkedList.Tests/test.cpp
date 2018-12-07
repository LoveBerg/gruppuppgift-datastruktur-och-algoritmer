#include "pch.h"
#include "../Datastrukturer gruppuppgift/linkedList.h"

TEST(LinkedList, InsertIntToList) {
	LinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(LinkedList, InsertFloatToList) {
	LinkedList<float> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(LinkedList, InsertStringToList) {
	LinkedList<std::string> test;
	test.InsertFirst("Tjenare");
	test.InsertFirst("Mannen");
	test.InsertFirst("Läget");
	test.InsertFirst("Då?");
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(LinkedList, InsertClassObjectToList) {
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
TEST(LinkedList, GetSizeOfList) {
	LinkedList<int> test;
	test.InsertFirst(1);
	test.InsertFirst(2);
	test.InsertFirst(3);
	test.InsertFirst(4);
	test.GetSize();
	EXPECT_EQ(3, test.GetSize());
}