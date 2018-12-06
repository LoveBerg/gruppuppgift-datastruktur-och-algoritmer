#include "pch.h"
#include "../Datastrukturer gruppuppgift/linkedList.h"

TEST(TestCaseName, InsertIntToList) {
	LinkedList<int> test;
	test.AddNodeAtBeginning(1);
	test.AddNodeAtBeginning(2);
	test.AddNodeAtBeginning(3);
	test.AddNodeAtBeginning(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(TestCaseName, InsertFloatToList) {
	LinkedList<float> test;
	test.AddNodeAtBeginning(1);
	test.AddNodeAtBeginning(2);
	test.AddNodeAtBeginning(3);
	test.AddNodeAtBeginning(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(TestCaseName, InsertStringToList) {
	LinkedList<std::string> test;
	test.AddNodeAtBeginning("Tjenare");
	test.AddNodeAtBeginning("Mannen");
	test.AddNodeAtBeginning("Läget");
	test.AddNodeAtBeginning("Då?");
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(TestCaseName, InsertClassObjectToList) {
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
	person.AddNodeAtBeginning(*p);
	person.GetSize();
	EXPECT_EQ(1, person.GetSize());
}
TEST(TestCaseName, GetSizeOfList) {
	LinkedList<int> test;
	test.AddNodeAtBeginning(1);
	test.AddNodeAtBeginning(2);
	test.AddNodeAtBeginning(3);
	test.AddNodeAtBeginning(4);
	test.GetSize();
	EXPECT_EQ(3, test.GetSize());
}