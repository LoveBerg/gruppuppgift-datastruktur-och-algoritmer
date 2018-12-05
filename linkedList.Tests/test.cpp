#include "pch.h"
#include "../Datastrukturer gruppuppgift/linkedList.h"

TEST(TestCaseName, InsertIntToList) {
	LinkedList<int> test;
	test.AddNodeToFirst(1);
	test.AddNodeToFirst(2);
	test.AddNodeToFirst(3);
	test.AddNodeToFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(TestCaseName, InsertFloatToList) {
	LinkedList<float> test;
	test.AddNodeToFirst(1);
	test.AddNodeToFirst(2);
	test.AddNodeToFirst(3);
	test.AddNodeToFirst(4);
	test.GetSize();
	EXPECT_EQ(4, test.GetSize());
}
TEST(TestCaseName, InsertStringToList) {
	LinkedList<std::string> test;
	test.AddNodeToFirst("Tjenare");
	test.AddNodeToFirst("Mannen");
	test.AddNodeToFirst("Läget");
	test.AddNodeToFirst("Då?");
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
	person.AddNodeToFirst(*p);
	person.GetSize();
	EXPECT_EQ(1, person.GetSize());
}
TEST(TestCaseName, GetSizeOfList) {
	LinkedList<int> test;
	test.AddNodeToFirst(1);
	test.AddNodeToFirst(2);
	test.AddNodeToFirst(3);
	test.AddNodeToFirst(4);
	test.GetSize();
	EXPECT_EQ(3, test.GetSize());
}